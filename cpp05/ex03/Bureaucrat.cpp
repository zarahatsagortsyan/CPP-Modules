#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name), grade(_grade)
{
    // std::cout << "Bureaucrat constructor" << std::endl;
    if(grade > 150)
        throw GradeTooLowException();
    else if(grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur)
{
    // std::cout << "Bureaucrat copy constructor" << std::endl;

    *(this) = bur;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bur)
{
    // std::cout << "Bureaucrat = operator" << std::endl;

    this->grade = bur.grade;
    return *(this);
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrGrade()
{
    if (this->grade == 1)
    {
        throw GradeTooHighException();
    }
    
    this->grade--;
}

void Bureaucrat::decrGrade()
{
    if (this->grade == 150)
    {
        throw GradeTooLowException();
    }
    this->grade++;
}

void Bureaucrat::signForm(Form &form) const
{
    try
    {
       form.beSigned(*this);
       std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << name << " didn't execute " << form.getName() <<  " because of " <<e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat destructor" << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException (<150)";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "GradeTooHighException (>1)";
}

std::ostream &operator<<(std::ostream &obj, const Bureaucrat &a)
{
    return obj << a.getName() << ", Bureaucrat grade " << a.getGrade() << std::endl;
}