#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
    std::cout<<"Int constructor was called" << std::endl;
    fixed_point = (val << fract_bits);
}

Fixed::Fixed(const float val)
{
    std::cout<<"Float constructor was called" << std::endl;
    fixed_point = roundf(val * (1 << fract_bits));
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;

    (*this) = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;

    this->fixed_point = obj.getRawBits();
    return (*this);
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
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &obj, const Fixed &fixed)
{
    obj << fixed.toFloat();
    return (obj);
}