#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form* rrf;

    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        rrf = someRandomIntern.makeForm("xxx request", "Bender");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}