#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie 
{
    private:
        std::string name;
    public:
        void announce( void );
        Zombie(std::string _name);
        ~Zombie();
};


#endif