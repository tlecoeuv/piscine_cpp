
#include "span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(Span const & src)
{
	*this = src;
}

Span &	Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_tab = rhs._tab;
	}
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(int n)
{
	if (_tab.size() < _N)
		_tab.push_back(n);
	else
		throw Span::StorageFullException();
}

unsigned int	Span::shortestSpan()
{
	if (_tab.size() <= 1)
		throw Span::NoSpanException();

	std::vector<int> tmp = _tab;
	unsigned int span;

	std::sort(tmp.begin(), tmp.end());
	span = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; i++)
	{
		if (span > static_cast<unsigned int>(tmp[i + 1] - tmp[i]))
			span = tmp[i + 1] - tmp[i];
	}
	return (span);
}

unsigned int	Span::longestSpan()
{
	if (_tab.size() <= 1)
		throw Span::NoSpanException();

	std::vector<int> tmp = _tab;

	std::sort(tmp.begin(), tmp.end());

	return (tmp.back() - tmp.front());
}
