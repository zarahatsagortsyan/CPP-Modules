#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WAnimal";
    std::cout<<"WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type)
{
    this->type = _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ob)
{
    (*this) = ob;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    this->type = obj.getType();
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "sound WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal destructor" << std::endl;
}