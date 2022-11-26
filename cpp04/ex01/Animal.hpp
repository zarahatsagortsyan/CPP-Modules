#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string _type);
        Animal(const Animal &ob);
        Animal &operator=(const Animal &ob);

        virtual void makeSound() const;
        std::string getType() const;
        virtual ~Animal();
};


#endif