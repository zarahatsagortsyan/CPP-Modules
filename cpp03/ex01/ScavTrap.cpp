#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap: Default constructor called" << std::endl;
    Name = "ScavTrap";
    hitPoints = 100;
    energyPoints = 50;
    attackDemage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20)
{
    std::cout<< "ScavTrap with name:" << name << "  was created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cp)
{
    *this = cp;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cp)
{
    Name = cp.Name;
    hitPoints = cp.hitPoints;
    energyPoints = cp.energyPoints;
    attackDemage = cp.attackDemage;

    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0) 
    {
        std::cout << "ScavTrap: " << Name << ":" << std::endl;
        std::cout << "hitPoints: " << hitPoints << std::endl;
        std::cout << "energyPoints: " << energyPoints << std::endl;
        return;
    }
    
    std::cout << "ScavTrap: " << Name << " attacks " << target << " causing " << attackDemage << " points of damage!" << std::endl;
    energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << Name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<< "ScavTrap with name: " << this->Name << "  was destroyed" << std::endl;
}