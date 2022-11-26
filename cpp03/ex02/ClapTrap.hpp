#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>
#include <string>

    class ClapTrap
    {
        protected:
            std::string Name;
            int hitPoints;
            int energyPoints;
            int attackDemage;
        public:
            ClapTrap();
            ClapTrap(std::string _Name);
            ClapTrap(std::string _Name, int h_p, int e_p, int a_d);

            ClapTrap(const ClapTrap &cp);
            ClapTrap &operator=(const ClapTrap &cp);

            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            ~ClapTrap();
    };

#endif