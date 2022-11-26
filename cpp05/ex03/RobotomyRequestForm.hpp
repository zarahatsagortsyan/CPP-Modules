#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    private:
        std::string target;
        void execute(Bureaucrat const &executor) const;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);

        RobotomyRequestForm(const RobotomyRequestForm &ob);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        
        virtual ~RobotomyRequestForm();
};

#endif