#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void)
{
    std::cout<<name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << name << " is destroyed" << std::endl;
}

Zombie::Zombie(std::string _name)
{
    this->name = _name;
    std::cout<< _name <<" was born!"<<std::endl;
}