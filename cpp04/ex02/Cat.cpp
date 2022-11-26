#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();

    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &ob)
{
    std::cout << "Cat copy constructor" << std::endl;
    (*this) = ob;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Cat &Cat::operator=(const Cat &ob)
{
    std::cout << "Cat = operator" << std::endl;
    this->brain = new Brain();
    *(this->brain) = *(ob.brain);
    this->type = ob.type;
    
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout<<"Cat destructor" << std::endl;
}