#include "Caster.hpp"

Caster::Caster(std::string _arg)
{
    try
    {
        arg = std::stod(_arg);
    }
    catch(...)
    {
        temp = 1;
    }

    std::cout << std::fixed;
    std::cout.precision(1);
    toChar();
    toInt();
    toFloat();
    toDouble();
}

void Caster::toChar()
{
    if(isnan(arg) || temp)
        std::cout << "char: impossible" << std::endl;
    else if(!isprint(arg))
        std::cout << "char: Non displayable" << std::endl;
    else    
        std::cout << "char: " << static_cast<char>(arg) << std::endl;;
}

void Caster::toInt()
{
    if(isnan(arg) || temp || arg < INT_MIN || arg > INT_MAX)
        std::cout << "int: impossible" << std::endl;
    else    
        std::cout << "int: " << static_cast<int>(arg) << std::endl;
}

void Caster::toFloat()
{
    std::cout << std::fixed;
    std::cout.precision(1);

    if(temp)
        std::cout << "float: impossible" << std::endl;
    else    
        std::cout << "float: " << static_cast<float>(arg) << std::endl;
}

void Caster::toDouble()
{

    if(temp)
        std::cout << "double: impossible" << std::endl;
    else    
        std::cout << "double: " << static_cast<double>(arg) << std::endl;
}

Caster::Caster(const Caster &ob)
{
    std::cout << "Caster copy constructor" << std::endl;
    *(this) = ob;
}

Caster &Caster::operator=(const Caster &ob)
{
    std::cout << "Caster = operator" << std::endl;

    this->arg = ob.arg;
    this->temp = ob.temp;
    return *(this);
}

Caster::~Caster()
{
    // std::cout << "Destructor" << std::endl; 
}