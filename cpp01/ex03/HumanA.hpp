#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:
        Weapon &weapon;
        std::string name;
    public:
        HumanA(std::string _name, Weapon &_weapon);
        void attack();
        void setWeapon(Weapon _weapon);
        ~HumanA();
};

#endif