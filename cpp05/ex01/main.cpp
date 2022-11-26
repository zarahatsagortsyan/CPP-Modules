#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat *bur1 = NULL;
    Form *form1 = NULL;
    try
    {
        bur1 = new Bureaucrat("Bur1", 4);
        form1 = new Form("Form1", 10, 5);
        bur1->signForm(*form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;

    try
    {
        bur1 = new Bureaucrat("Bur1", 15);
        form1 = new Form("Form1", 10, 5);
        bur1->signForm(*form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;

    try
    {
        bur1 = new Bureaucrat("Bur1", 10);
        form1 = new Form("Form1", 1, 5);
        bur1->signForm(*form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete bur1;
    delete form1;
}