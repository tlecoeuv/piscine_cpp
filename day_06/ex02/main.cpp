#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify_from_pointer(Base * p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;

}

void	identify_from_reference( Base & p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void) a;
	}
	catch (std::bad_cast &bc) {}

	try
	{
		B	&b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void) b;
	}
	catch (std::bad_cast &bc) {}

	try
	{
		C	&c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void) c;
	}
	catch (std::bad_cast &bc) {}
}

int		main()
{
	Base	*pA = new A();
	identify_from_pointer(pA);
	identify_from_reference(*pA);
	delete pA;

	Base	*pB = new B();
	identify_from_pointer(pB);
	identify_from_reference(*pB);
	delete pB;

	Base	*pC = new C();
	identify_from_pointer(pC);
	identify_from_reference(*pC);
	delete pC;

	return 0;
}
