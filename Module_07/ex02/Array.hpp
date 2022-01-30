#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T				*_arr;
	unsigned int	_len;
public:
	Array() : _arr(new T[0]), _len(0) {};
	Array(unsigned int len): _arr(new T[len]), _len(len)
	{
		for (unsigned int i = 0; i < _len; i++)
			_arr[i] = 0;
	};
	~Array() {delete [] _arr;};
	
	Array(Array const &copy)
	{
		_len = copy._len;
		_arr = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			_arr[i] = copy._arr[i];
	};
	
	Array &operator= (Array const &assign)
	{
		if (this == &assign)
			return (*this);
		delete [] _arr;
		_len = assign._len;
		_arr = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			_arr[i] = assign._arr[i];
		return (*this);
	};
	
	T &operator[](unsigned int index)
	{
		if (index < 0 || index >= _len)
			throw IncorrectIndexException();
		return (_arr[index]);
	}
	
	unsigned int size(void) const
	{
		return (_len);
	}
	
	class IncorrectIndexException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Exception! Incorrect Index!");
		}
	};
};

#endif
