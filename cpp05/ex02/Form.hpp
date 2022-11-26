#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int gradeSign;
        const int gradeExec;

    public:
        Form();
        Form(std::string name, int grade_execute, int grade_sign);
        Form(const Form &obj);
        Form &operator=(const Form &obj);

        std::string getName() const;
        bool getSign() const;
        int getExecute() const;
        int getSigned() const;

        void beSigned(Bureaucrat bur_sign);
        virtual void execute(Bureaucrat const &form) const = 0;

        ~Form ();

        class GradeTooHighException: public std::exception
        {
            const char *what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &obj, const Form &bur);


#endif