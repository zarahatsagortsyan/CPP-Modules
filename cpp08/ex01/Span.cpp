#include "Span.hpp"

Span::Span(unsigned int _N)
{
    _span.reserve(_N);
}

Span::Span(const Span &obj)
{
    (*this) = obj;
}

Span &Span::operator=(const Span &obj)
{
    if (this != &obj)
    { 
        _span.clear();
        this->_span.reserve(obj._span.capacity());
        this->_span = obj._span;
    }
    return (*this);
}

void Span::addNumber(int num)
{
    if (_span.size() == _span.capacity())
        throw std::overflow_error("Span is full");
    
    _span.push_back(num);
    std::sort(_span.begin(), _span.end());
}

int Span::longestSpan() const
{
    if (_span.size() < 2)
        throw std::logic_error("Not enough numbers");
    return (_span.back() - _span.front());
}

int Span::shortestSpan() const
{
    if (_span.size() < 2)
        throw std::logic_error("Not enough numbers");
    int min = _span[1] - _span[0];

    for (int i = 1; i < _span.size() - 1; i++)
        if (_span[i + 1] - _span[i] < min)
            min = _span[i + 1] - _span[i];
    return min;
}

Span::~Span(){}