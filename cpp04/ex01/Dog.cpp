#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
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
    this->brain = new Brain();
    *(this->brain) = *(ob.brain);
    this->type = ob.type;

    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Haf Haf" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout<<"Dog destructor" << std::endl;
}