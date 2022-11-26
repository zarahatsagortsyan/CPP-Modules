#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat")
{
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ob)
{
    std::cout << "WrongCat copy constructor" << std::endl;
    (*this) = ob;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &ob)
{
    std::cout << "WrongCat = operator" << std::endl;
    this->type = ob.type;

    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat destructor" << std::endl;
}