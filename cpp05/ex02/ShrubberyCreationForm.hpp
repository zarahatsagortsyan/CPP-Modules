#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

#define ASCII_TREE \
"              * *\n"				\
"           *    *  *\n"			\
"      *  *    *     *  *\n"		\
"     *     *    *  *    *\n"		\
" * *   *    *    *    *   *\n"		\
" *     *  *    * * .#  *   *\n"	\
" *   *     * #.  .# *   *\n"		\
"  *     \"#.  #: #\" * *    *\n"	\
" *   * * \"#. ##\"       *\n"		\
"   *       \"###\n"				\
"             \"##\n"				\
"              ##.\n"				\
"              .##:\n"				\
"              :###\n"				\
"              ;###\n"				\
"            ,####.\n"				\
"           .######.\n"

class ShrubberyCreationForm: public Form
{
    private:
        std::string target;
        void execute(Bureaucrat const &executor) const;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);

        ShrubberyCreationForm(const ShrubberyCreationForm &ob);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        
        virtual ~ShrubberyCreationForm();
};

#endif