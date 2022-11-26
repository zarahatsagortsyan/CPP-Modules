#ifndef INTERN_HPP

#define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

    public:
        Intern();

        Intern &operator=(const Intern &ob);
        Intern(const Intern &ob);
        Form *makeForm(std::string const &fname, std::string const &ftarget) const;

        ~Intern();
        typedef struct s_list
		{
			std::string name;
			Form *form;
		}				t_list;


};


#endif