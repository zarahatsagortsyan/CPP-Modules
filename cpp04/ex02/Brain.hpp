#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &ob);
        Brain &operator=(const Brain &ob);
        ~Brain();
    };

#endif