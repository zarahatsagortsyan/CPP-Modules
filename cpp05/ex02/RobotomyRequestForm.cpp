#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72, 45)
{
    // std::cout << "RobotomyRequestForm constructor" << std::endl;

    target = "randomTarget";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target):Form("RobotomyRequestForm", 72, 45)
{
    // std::cout << "RobotomyRequestForm constructor"<< std::endl;

    target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ob)
{
    // std::cout << "RobotomyRequestForm copy constructor" << std::endl;

    (*this) = ob;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ob)
{
    this->target = ob.target;

    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    srand (time(NULL));
    if (rand() % 2 == 0)
        std::cout << target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy failed." << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm destructor" << std::endl;
}