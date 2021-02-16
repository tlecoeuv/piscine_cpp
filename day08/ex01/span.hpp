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
	void 			addNumber(int n, unsigned int range);
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

	std::vector<int>::iterator	begin() {return (_tab.begin());}
	std::vector<int>::iterator	end() {return (_tab.end());}

private:
	unsigned int		_N;
	std::vector<int>	_tab;
	unsigned int	_sizeTab;
};

#endif
