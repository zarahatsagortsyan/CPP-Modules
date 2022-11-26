#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::string s1 = "ClapTrap11";
    std::string s2 = "ScavTrap11";
    ClapTrap cp1(s1);
    ScavTrap cp2(s2);

    cp2.guardGate();

    cp1.attack(s2);
    cp2.beRepaired(15);
    cp2.takeDamage(10);
    cp2.attack(s1);
    cp1.beRepaired(5);
    cp1.takeDamage(20);
    cp1.attack(s2);
    cp2.beRepaired(2);
    cp2.takeDamage(5);
    cp2.attack(s1);
    return (0);

}