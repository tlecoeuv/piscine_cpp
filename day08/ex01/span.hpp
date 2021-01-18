#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>

class		Span
{
public:
	Span();
	Span(unsigned int N);
	Span(Span const & src);
	~Span();

	Span &			operator=(Span const & rhs);

	void			addNumber(int n);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();


	class	NoSpanException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("there is no span to find");
		}
	};
	class	StorageFullException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Storage is full");
		}
	};

private:
	unsigned int		_N;
	std::vector<int>	_tab;
	unsigned int	_sizeTab;
};

#endif
