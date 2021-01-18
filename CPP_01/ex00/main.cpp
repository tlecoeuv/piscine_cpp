
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	std::cout << "ponyOntheHeap started" << std::endl;

	Pony *p = new Pony("Heap_pony", 6);
	p->print_info();

	delete p;
}

void	ponyOnTheStack(void)
{
	std::cout << "ponyOntheStack started" << std::endl;

	Pony p = Pony("Stack_pony", 5);
	p.print_info();
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
