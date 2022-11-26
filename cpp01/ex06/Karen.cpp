#include "Karen.hpp"
#include <iostream>
#include <string>

Karen::Karen()
{

}

Karen::~Karen()
{

}

void Karen::debug(void)
{
    std::cout << "Debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "Info: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "Warning: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "Error: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    //a pointer to Karen member function
    //taking no arguments and returning void
    void (Karen::*members[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    int i = 0;
    bool selectedLevel[] = {level == "DEBUG",
                            level == "INFO",
                            level == "WARNING",
                            level == "ERROR"};
                            
    while(selectedLevel[i] == 0)
        i++;
    (this->*members[i])();
}
