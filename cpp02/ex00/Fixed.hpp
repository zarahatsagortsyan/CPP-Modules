#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
    int fixed_point;
    static const int fract_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();

};




#endif