#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat &ob);
        Cat &operator=(const Cat &ob);

        void makeSound() const;

        virtual ~Cat();
};




#endif