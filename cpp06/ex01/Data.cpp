#include "Data.hpp"

Data::Data(){}

Data::Data(const Data &ob)
{
    (*this) = ob;
}

Data &Data::operator=(const Data &ob)
{
    return (*this);
}

Data::~Data(){}