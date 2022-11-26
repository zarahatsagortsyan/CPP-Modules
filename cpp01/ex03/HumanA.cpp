#include "HumanA.hpp"
#include "Weapon.hpp"

#include <iostream>


HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon)
{
    name = _name;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType()<< std::endl; 
}

void HumanA::setWeapon(Weapon _weapon)
{
    weapon = _weapon;
}

HumanA::~HumanA()
{
    
}