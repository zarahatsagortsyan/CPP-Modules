#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(const Animal &ob);
        Animal();
        Animal(std::string _type);
        Animal &operator=(const Animal &ob);

        virtual void makeSound() const = 0;
        std::string getType() const;
        virtual ~Animal();
};
#endif