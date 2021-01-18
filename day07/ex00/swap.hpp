#ifndef SWAP_HPP
# define SWAP_HPP

template<typename T>
void	swap(T & x, T & y)
{
	T	save;

	save = x;
	x = y;
	y = save;
}


#endif
