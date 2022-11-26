#include "Zombie.hpp"
#include <string>

Zombie* newZombie(std::string _name);
void randomChump(std::string _name);

int main(void)
{
    Zombie *zombie; 
 
    zombie = newZombie("Nora");
    zombie->announce();
    randomChump("Sima");

    delete zombie;
    return (0);
}