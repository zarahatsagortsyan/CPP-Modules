#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB();
        HumanB(std::string _name);   
        void attack(); 
        void setWeapon(Weapon &weapon);
        ~HumanB();

};

#endif