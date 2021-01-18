
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int		main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* moi = new Character("moi");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	moi->equip(tmp);
	tmp = src->createMateria("inexistent");
	moi->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << "part1:" << std::endl;
	moi->use(0, *bob);
	moi->use(1, *bob);
	moi->use(3, *bob);
	moi->use(5, *bob);

	moi->unequip(2);
	moi->unequip(3);
	std::cout << "part2:" << std::endl;
	moi->use(2, *bob);
	moi->use(1, *bob);
	moi->use(3, *bob);

	delete bob;
	delete moi;
	delete src;

	return 0;
}
