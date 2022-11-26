#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog &ob);
        Dog &operator=(const Dog &ob);

        void makeSound() const;

        virtual ~Dog();
};


#endif