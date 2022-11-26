#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanB::HumanB()
{

}

HumanB::HumanB(std::string _name)
{
    name = _name;
    weapon = NULL;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType()<< std::endl; 
}

void HumanB::setWeapon(Weapon &_weapon)
{
    weapon = &_weapon;
}

HumanB::~HumanB()
{
    
}