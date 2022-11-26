#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &ob)
{
    std::cout << "Dog copy constructor" << std::endl;
    (*this) = ob;
}

Dog &Dog::operator=(const Dog &ob)
{
    std::cout << "Dog = operator" << std::endl;
    this->type = ob.type;

    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Haf Haf" << std::endl;
}

Dog::~Dog()
{
    std::cout<<"Dog destructor" << std::endl;
}