#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string _type);
        WrongAnimal(const WrongAnimal &ob);
        WrongAnimal &operator=(const WrongAnimal &ob);

        virtual void makeSound() const;
        std::string getType() const;
        virtual ~WrongAnimal();
};


#endif