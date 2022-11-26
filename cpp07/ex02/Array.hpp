#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template    <typename T>
class Array
{
    private:
        T               *_arr;
        unsigned int    _size;
    public:
        Array();
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();
		
        Array           &operator=(const Array &copy);
        T               &operator[](unsigned int i) const;
        unsigned int    size() const;
};

template    <typename T>
Array<T>::Array() : _arr(0), _size(0) {}

template    <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) {}

template    <typename T>
Array<T>::Array(const Array &copy) : _arr(0), _size(0) 
{
    if (_size != 0)
	{
		_arr = new T[_size];
		for	(unsigned int i = 0; i < copy._size; ++i)
			this->_arr[i] = copy._arr[i];
	}
}

template	<typename T>
Array<T>::~Array()
{
	delete [] this->_arr;
}

template	<typename T>
Array<T>	&Array<T>::operator=(const Array &obj)
{
	if (this != &obj)
	{
		if (this->_size > 0)
			delete [] this->_arr;

		this->_size = obj._size;
		this->_arr = new T[_size];
		for (unsigned int i = 0; i < obj._size; ++i)
			this->_arr[i] = obj._arr[i];
	}

	return (*this);
}

template	<typename T>
T	&Array<T>::operator[](unsigned int index) const
{
	if (index < 0 || index >= this->_size)
		throw std::range_error("index out of range");
	return (this->_arr[index]);
}

template		<typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

#endif