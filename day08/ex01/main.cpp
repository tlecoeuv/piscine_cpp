
#include "span.hpp"

int		main()
{
	std::cout << "test du sujet:_n" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n test span(10000), [0, 1, ..., 9999]:" << std::endl;
	Span sp2 = Span(10000);
	sp2.addNumber(0, 9999);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}
