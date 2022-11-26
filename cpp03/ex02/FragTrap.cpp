#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap("FragTrap", 100, 100, 30)
{
    std::cout << "FragTrap: Default constructor called!" << std::endl;

}

FragTrap::FragTrap(std::string name):ClapTrap(name, 100, 100, 30)
{
    std::cout<< "FragTrap with name:" << name << "  was created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cp)
{
    *this = cp;
}

FragTrap &FragTrap::operator=(const FragTrap &cp)
{
    Name = cp.Name;
    hitPoints = cp.hitPoints;
    energyPoints = cp.energyPoints; 
    attackDemage = cp.attackDemage;

    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0) 
    {
        std::cout << "FragTrap: " << Name << ":" << std::endl;
        std::cout << "hitPoints: " << hitPoints << std::endl;
        std::cout << "energyPoints: " << energyPoints << std::endl;
        return;
    }
    
    std::cout << "FragTrap: " << Name << " attacks " << target << " causing " << attackDemage << " points of damage!" << std::endl;
    energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: " << Name << ": positive high five request!!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<< "FragTrap with name: " << this->Name << "  was destroyed" << std::endl;
}
