#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
    private:
        int fixed_point;
        static const int fract_bits = 8;

    public:
        Fixed();
        Fixed(const int val);
        Fixed(const float val);
        Fixed(const Fixed &obj);

        Fixed &operator=(const Fixed &obj);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        float toFloat( void ) const;
        int toInt( void ) const;
        
        ~Fixed();

};

std::ostream &operator<<(std::ostream &obj, const Fixed &fixed);


#endif