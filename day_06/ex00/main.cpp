
#include "convert.hpp"

int		main(int argc, char **argv)
{
	t_values	values;

	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}

	convert(argv[1], values);
	displayValues(values);
	return 0;
}
