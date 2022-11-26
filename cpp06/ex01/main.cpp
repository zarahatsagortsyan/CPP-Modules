#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

int main()
{
    Data test;

    uintptr_t test_serialize = serialize(&test);
    Data *test_address = deserialize(test_serialize);

    std::cout << "checking: ";
    
    if(test_address == &test)
        std::cout << "success" << std::endl;
    else
        std::cout << "fail" << std::endl;
}