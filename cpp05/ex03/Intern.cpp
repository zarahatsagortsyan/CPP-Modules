#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &ob)
{
    (*this) = ob;
}

Intern &Intern::operator=(const Intern &ob)
{
    if (this != &ob)
        return (*this);
    
    return (*this);
}

Form	*Intern::makeForm(const std::string &formName, const std::string &target) const
{
	Form *f = NULL;
	t_list forms[] = 
	{
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
	};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i].name == formName)
			f = forms[i].form;
		else
			delete forms[i].form;
	}
	if (f == NULL)
		std::cout << "Intern could not find the form " << formName << std::endl;
	else
		std::cout << "Intern creates " << formName << std::endl;
	return f;
}
Intern::~Intern(){}