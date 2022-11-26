#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
    private:
        std::vector<int> _span;
    public:
        Span(unsigned int N);
        Span(const Span &obj);
        Span &operator=(const Span &obj);

        void addNumber(int num);

        int shortestSpan() const;
        int longestSpan() const;

        template <typename It>
        void addNumber(It start, It end);

        ~Span();
};

template <typename It>
void Span::addNumber(It start, It end)
{
    while(start != end)
    {
        addNumber(*start);
        start++;
    }
}

#endif