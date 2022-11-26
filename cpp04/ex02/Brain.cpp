#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &ob)
{
    std::cout << "Brain copy constructor" << std::endl;
    (*this) = ob;
}

Brain &Brain::operator=(const Brain &ob)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ob.ideas[i];

    std::cout << "Brain = operator" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout<<"Brain destructor" << std::endl;
}