#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", 25, 5)
{
    // std::cout << "PresidentialPardonForm constructor" << std::endl;

    target = "randomTarget";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target):Form("PresidentialPardonForm", 25, 5)
{
    // std::cout << "PresidentialPardonForm constructor" << std::endl;

    target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ob)
{
    // std::cout << "PresidentialPardonForm copy constructor" << std::endl;

    (*this) = ob;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ob)
{
    this->target = ob.target;

    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);

    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "PresidentialPardonForm destructor" << std::endl;
}