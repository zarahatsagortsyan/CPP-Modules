#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &ob);
        WrongCat &operator=(const WrongCat &ob);

        void makeSound() const;

        ~WrongCat();
};




#endif