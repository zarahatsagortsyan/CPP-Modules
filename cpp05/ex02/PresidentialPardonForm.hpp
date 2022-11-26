#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        std::string target;
        void execute(Bureaucrat const &executor) const;
        
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);

        PresidentialPardonForm(const PresidentialPardonForm &ob);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
        
        virtual ~PresidentialPardonForm();
};


#endif