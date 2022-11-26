#include <iostream>
#include <iomanip>
#include <string>

bool check_Naming(std::string text)
{
    if (text != "")
    {    
        for (unsigned long i = 0; i < text.length(); i++)
        {
            if (!std::isalpha(text[i]))
                return false;
        }   
    }
    return true;
}

bool check_number(std::string text)
{
    if (text != "")
    {    
        for (unsigned long i = 0; i < text.length(); i++)
        {
            if (!std::isdigit(text[i]))
                return false;
        }   
    }
    return true;
}

std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
    if (str.length() > width)
    {
        if (show_ellipsis)
            return str.substr(0, width) + ".";
        else
            return str.substr(0, width);
    }
    return str;
}
void print_contact(int ID, std::string first_name, std::string last_name,
                                                    std::string nick_name)
{
    std::cout<< std::right << std::setw(10) <<  ID + 1 << "|" <<
                std::right << std::setw(10) << truncate(first_name, 9)  <<  "|" <<
                std::right << std::setw(10) << truncate(last_name, 9)   <<  "|" <<
                std::right << std::setw(10) << truncate(nick_name, 9)   << std::endl; 
}
