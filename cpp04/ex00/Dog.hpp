#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &ob);
        Dog &operator=(const Dog &ob);

        void makeSound() const;

        ~Dog();
};


#endif