#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>

void iter(T * arr, int len, void(*f)(T&))
{
    for (size_t i = 0; i < len; i++)
        f(arr[i]);
}

#endif