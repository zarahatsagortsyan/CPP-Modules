#ifndef CASTER_HPP
#define CASTER_HPP

#include <iostream>
#include <string>
#include <math.h> 


class Caster
{
    private:
        bool temp;
        double	arg;
        void	toChar();
        void	toInt();
        void	toFloat();
        void	toDouble();
    public:
        Caster(std::string arg);
        Caster(const Caster &ob);
        Caster &operator=(const Caster &ob);
        ~Caster();
};





#endif