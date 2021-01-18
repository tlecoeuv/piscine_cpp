#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t size, void (&fct)(const T &))
{
	for (size_t i = 0; i < size; i++)
		fct(array[i]);
}

template <typename T>
void	print(const T &val)
{
	std::cout << val << std::endl;
}

#endif
