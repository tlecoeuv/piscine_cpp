#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(std::stack<T> const & src) : std::stack<T>(src) {}
	MutantStack(MutantStack const & src) : std::stack<T>(src) {}

	virtual ~MutantStack() {}

	using std::stack<T>::operator=;

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin() {return std::begin(std::stack<T>::c);}
	iterator	end() {return std::end(std::stack<T>::c);}
};

#endif
