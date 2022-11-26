#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap: Default constructor called" << std::endl;
    Name = "ClapTrap";
    hitPoints = 10;
    energyPoints = 10;
    attackDemage = 0;
}

ClapTrap::ClapTrap(std::string _Name): Name(_Name)
{
    std::cout << "ClapTrap: Constructror called: Name: " << _Name << std::endl;
    hitPoints = 10;
    energyPoints = 10;
    attackDemage = 0;
}

ClapTrap::ClapTrap(std::string _Name, int h_p, int e_p, int a_d):Name(_Name), hitPoints(h_p), energyPoints(e_p), attackDemage(a_d)
{
    std::cout<<"ClapTrap constructor was called.(name, h_p, e_p, a_d)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
    *this = cp;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp)
{
    Name = cp.Name;
    hitPoints = cp.hitPoints;
    energyPoints = cp.energyPoints;
    attackDemage = cp.attackDemage;

    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0) 
    {
        std::cout << "ClapTrap: " << Name << ":" << std::endl;
        std::cout << "hitPoints: " << hitPoints << std::endl;
        std::cout << "energyPoints: " << energyPoints << std::endl;
        return;
    }
    
    std::cout << "ClapTrap: " << Name << " attacks " <<
                 target << " causing " << attackDemage << " points of damage!" << std::endl;

    energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap attacks and his target: " << Name << " loses " 
                        << amount << " hit points! " << attackDemage << 
                                                        " points of damage!" << std::endl;
    hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap: " << Name << " repairs itself and it gets " <<
                              amount << " hit points back!" << std::endl;
    hitPoints += amount;
    energyPoints--;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}