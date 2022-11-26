// #include "Bureaucrat.hpp"
// #include "Form.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

// int main()
// {
//     Bureaucrat *bur1 = NULL;
//     Bureaucrat *bur2 = NULL;

//     ShrubberyCreationForm *shForm = NULL;
//     RobotomyRequestForm *robForm = NULL;
//     PresidentialPardonForm *presForm = NULL;

//     try
//     {
//         bur1 = new Bureaucrat("bur1", 15);
//         bur2 = new Bureaucrat("Head", 3);
//         shForm = new ShrubberyCreationForm("home");
//         robForm = new RobotomyRequestForm("shop");
//         presForm = new PresidentialPardonForm("hospital");

//         bur1->signForm(*shForm);
//         bur2->executeForm(*shForm);

//         bur1->signForm(*robForm);
//         bur2->executeForm(*robForm);

//         bur1->signForm(*presForm);
//         bur2->executeForm(*presForm);

//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     delete bur1;
//     delete bur2;
//     delete shForm;
//     delete robForm;
//     delete presForm;
// }

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    ShrubberyCreationForm	shrub("shrub");
	RobotomyRequestForm		robot("robot");
	PresidentialPardonForm	president("president");

	Bureaucrat				b1("Bureaucrat1", 145);
	Bureaucrat				b2("Bureaucrat2", 137);
	Bureaucrat				b3("Bureaucrat3", 1);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;

    std::cout << shrub << std::endl;
    b3.executeForm(shrub);
	b1.signForm(shrub);
	b1.executeForm(shrub);
	b2.executeForm(shrub);
	b3.executeForm(shrub);
	std::cout << shrub << std::endl << std::endl;

    std::cout << robot << std::endl;
    b2.executeForm(robot);
	b3.signForm(robot);
	b3.executeForm(robot);
	b3.executeForm(robot);
	b3.executeForm(robot);
	std::cout << robot << std::endl << std::endl;

    std::cout << president << std::endl;
    b3.signForm(president);
    b3.executeForm(president);
}