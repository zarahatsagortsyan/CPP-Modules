#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &ob);

        FragTrap &operator=(const FragTrap &cp);

        void attack(const std::string& target);
        void highFivesGuys(void);

        ~FragTrap();
    };
    
#endif