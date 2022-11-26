#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat &ob);
        Cat &operator=(const Cat &ob);

        void makeSound() const;

        ~Cat();
};




#endif