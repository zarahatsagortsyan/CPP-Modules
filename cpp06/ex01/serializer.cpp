#include <iostream>
#include <stdint.h> 
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data    *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}