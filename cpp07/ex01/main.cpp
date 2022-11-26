#include "iter.hpp"
#include <iostream>

template <typename T>

void mul_byTwo(T &a)
{
    a *= 2;
}

int main()
{
    double arr[] = { 1, 2, 3, 4, 5 };
    iter<double>(arr, 5, mul_byTwo<double>);

    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;
}