#include "Form.hpp"

Form::Form() : name("Form"), gradeSign(1), gradeExec(1)
{
    sign = false;
}

Form::Form(std::string name, int grade_sign, int grade_execute) : name(name), gradeSign(grade_sign), gradeExec(grade_execute)
{
    sign = false;
    if(gradeExec < 1 || gradeSign < 1) throw GradeTooHighException();
    if(gradeExec > 150 || gradeSign > 150) throw GradeTooLowException();
}

Form::Form(const Form &obj) : name(obj.getName()), sign(obj.getSign()), gradeSign(obj.getSigned()),
                                gradeExec(obj.getExecute()) {}

Form &Form::operator=(const Form &form)
{
    std::cout << "Form = operator" << std::endl;

    this->sign = form.sign;

    return *(this);
}

std::string Form::getName() const
{
    return name;
}

int Form::getExecute() const
{
    return gradeExec;
}

int Form::getSigned() const
{
    return gradeSign;
}

bool Form::getSign() const
{
    return sign;
}

void Form::beSigned(Bureaucrat bur_sign)
{
    if (sign == true)
        throw std::runtime_error ("Your form has already been signed");
    if(bur_sign.getGrade() > gradeSign)
        throw GradeTooLowException();
    sign = true;
}

Form::~Form()
{
    std::cout << "Form destructor" << std::endl;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException (<150)";
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "GradeTooHighException (>1)";
}

std::ostream &operator<<(std::ostream &obj, const Form &a)
{
    obj << a.getName() << " get sign " << a.getSign() << std::endl;
    obj << a.getName() << " get grade execute " << a.getExecute() << std::endl;
    obj << a.getName() << " get grade sign " << a.getSigned() << std::endl;

    return (obj);
}