#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::Fixed(const int val)
{
    fixed_point = (val << fract_bits);
}

Fixed::Fixed(const float val)
{
    fixed_point = roundf(val * (1 << fract_bits));
}

Fixed::Fixed(const Fixed &obj)
{
    (*this) = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    this->fixed_point = obj.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed &obj) const
{
    return (fixed_point > obj.fixed_point);
}

bool Fixed::operator<(const Fixed &obj) const
{
    return (fixed_point < obj.fixed_point);
}

bool Fixed::operator>=(const Fixed &obj) const
{
    return (fixed_point >= obj.fixed_point);
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return (fixed_point <= obj.fixed_point);
}

bool Fixed::operator==(const Fixed &obj) const
{
    return (fixed_point == obj.fixed_point);
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return (fixed_point != obj.fixed_point);
}

Fixed Fixed::operator+(const Fixed &obj)
{
    Fixed sum(toFloat() + obj.toFloat());
    return (sum);
}

Fixed Fixed::operator-(const Fixed &obj)
{
    Fixed n(toFloat() - obj.toFloat());
    return (n);
}

Fixed Fixed::operator*(const Fixed &obj)
{
    Fixed n(toFloat() * obj.toFloat());
    return (n);
}

Fixed Fixed::operator/(const Fixed &obj)
{
    Fixed d(toFloat() / obj.toFloat());
    return (d);
}

Fixed &Fixed::operator++(void)
{
    this->fixed_point++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed   num(*this);

    this->fixed_point += 1;
    return (num);
}

Fixed &Fixed::operator--(void)
{
    this->fixed_point--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed   num(*this);

    this->fixed_point -= 1;
    return (num);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return f1;
    return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1 < f2)
        return f1;
    return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return f1;
    return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1 > f2)
        return f1;
    return f2;
}

int Fixed::getRawBits( void ) const
{
    return fixed_point;
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}

int Fixed::toInt( void ) const
{
    return (fixed_point >> fract_bits);
}

float Fixed::toFloat( void ) const
{
    return ((float)fixed_point / (1 << fract_bits));
}

Fixed::~Fixed()
{
}

std::ostream &operator<<(std::ostream &obj, const Fixed &fixed)
{
    obj << fixed.toFloat();
    return (obj);
}