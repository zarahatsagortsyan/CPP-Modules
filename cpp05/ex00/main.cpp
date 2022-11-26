#include "Bureaucrat.hpp"


int main(void)
{
    Bureaucrat *bur1;
    Bureaucrat *bur2;
    Bureaucrat *bur3;

    try
    {
        bur1 = new Bureaucrat("Bur1", 150);
        std::cout << *(bur1);
        std::cout << "Incrementing: ";
        bur1->incrGrade();
        std::cout << *(bur1);
        std::cout << "Decrementing: ";
        bur1->decrGrade();
        std::cout << *(bur1);
        std::cout << "Decrementing: ";
        bur1->decrGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        bur2 = new Bureaucrat("Bur2", 3);
        std::cout << *(bur2);
        std::cout << "Incrementing: ";
        bur2->incrGrade();
        std::cout << *(bur2);
        std::cout << "Incrementing: ";
        bur2->incrGrade();
        std::cout << *(bur2);
        std::cout << "Incrementing: ";
        bur2->incrGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        bur3 = new Bureaucrat("bur3", 9999);
        std::cout << *(bur3);
        std::cout << "Incrementing: ";
        bur3->incrGrade();
        std::cout << *(bur3);
        std::cout << "Incrementing: ";
        bur3->incrGrade();
        std::cout << *(bur3);
        std::cout << "Incrementing: ";
        bur3->incrGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    delete bur1;
    delete bur2;
    delete bur3;
    
    return 0;
}