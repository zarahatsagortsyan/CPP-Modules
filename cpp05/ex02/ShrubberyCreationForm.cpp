#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 145, 137)
{
    // std::cout << "ShrubberyCreationForm constructor" << std::endl;

    target = "randomTarget";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):Form("ShrubberyCreationForm", 145, 137)
{
    // std::cout << "ShrubberyCreationForm constructor" << std::endl;

    target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ob)
{
    // std::cout << "ShrubberyCreationForm copy constructor" << std::endl;

    (*this) = ob;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ob)
{
    this->target = ob.target;

    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::ofstream file(target + "_shrubbery");
    file << ASCII_TREE;
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm destructor" << std::endl;
}