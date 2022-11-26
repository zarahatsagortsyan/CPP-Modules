#include "Animal.hpp"

Animal::Animal()
{
    //type = "";
    std::cout<<"Animal constructor" << std::endl;
}

Animal::Animal(std::string _type)
{
    std::cout<<"Animal constructor" << std::endl;
    this->type = _type;
}

Animal::Animal(const Animal &ob)
{
    (*this) = ob;
}

Animal &Animal::operator=(const Animal &obj)
{
    this->type = obj.getType();
    return (*this);
}

std::string Animal::getType() const
{
    return type;
}

Animal::~Animal()
{
    std::cout<<"Animal destructor" << std::endl;
}