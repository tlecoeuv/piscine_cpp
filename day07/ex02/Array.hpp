#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
public:
	Array(void) : _size(0) { _array = new T[0](); }

	Array(unsigned int n) : _size(n) { _array = new T[n](); }

	Array(Array<T> const & src) : _size(src._size)
	{
		_array = new T[_size]();
		for(unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}

	~Array(void) { delete[] _array; }

	Array & operator=(Array const & rhs)
	{
		if (this != &rhs)
		{
			delete _array;
			_size = rhs._size;
			_array = new T[_size]();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
		}
		return (*this);
	}

	T &		operator[](unsigned int index)
	{
		if (index >= _size)
			throw Array::OutOfLimitsException();
		else
			return (_array[index]);
	}

	unsigned int	size(void) const { return _size; }

	class	OutOfLimitsException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Out of limits");
		};
	};

private:
	unsigned int	_size;
	T				*_array;
};

#endif
