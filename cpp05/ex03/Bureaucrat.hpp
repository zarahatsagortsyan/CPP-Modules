#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &bur);

        Bureaucrat &operator=(const Bureaucrat &bur);

        std::string getName() const;
        int getGrade() const;
    
        void incrGrade();
        void decrGrade();

        void signForm(Form &form) const;
        void executeForm(Form const & form);
        
        virtual ~Bureaucrat();

        class GradeTooHighException: public std::exception
        {
            const char *what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            const char *what() const throw();
        };

};

std::ostream &operator<<(std::ostream &obj, const Bureaucrat &bur);





#endif
