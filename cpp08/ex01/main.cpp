#include "Span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::vector<int> vect;
    for (int i = 0; i < 20002; i++)
        vect.push_back(i * 2);
    
    Span bigSpan(20002);
    bigSpan.addNumber(vect.begin(), vect.end());

    std::cout << std::endl;
    std::cout << bigSpan.shortestSpan() << std::endl;
    std::cout << bigSpan.longestSpan() << std::endl;

    Span smallSpan(1);
    try
    {
        smallSpan.addNumber(5);
        smallSpan.addNumber(1);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::cout << smallSpan.shortestSpan() << std::endl;
        std::cout << smallSpan.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}

