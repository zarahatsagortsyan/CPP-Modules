#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int val)
{
    if (find (container.begin(), container.end(), val) == container.end())
    {
        std::cout <<"value: " << val;
        throw std::range_error(" not found");
    }
    return find (container.begin(), container.end(), val);
}

#endif