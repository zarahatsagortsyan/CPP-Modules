#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    Animal *animals[5];

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    
    for (int i = 0; i < 5; i++)
        delete animals[i];
    

    std::cout << std::endl;
    Dog a;
    {
        Dog tmp = a;
    }
    a.makeSound();

    return 0;
}