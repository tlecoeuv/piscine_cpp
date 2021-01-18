
#include <iostream>
#include <string>

struct	Data
{
	std::string 	s1;
	int				n;
	std::string		s2;
};

void* 	serialize(void)
{
	char			*ret = new char[16 + sizeof(int)];
	std::string		alnum("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");

	std::srand(time(NULL));
	std::cout << "values during serialize:" << std::endl;

	for (int i = 0; i < 8; i++)
		ret[i] = alnum[rand() % 62];
	std::cout << "s1: " << std::string(ret, 8) << std::endl;

	int random = std::rand();
	*(reinterpret_cast<int*>(ret + 8)) = random;
	std::cout << "n: " << random << std::endl;

	for (int i = 12; i < 20; i++)
		ret[i] = alnum[rand() % 62];
	std::cout << "s1: " << std::string(ret + 12, 8) << std::endl;

	return ret;
}

Data*	deserialize(void *raw)
{
	Data	*data = new Data;
	char	*rawdata = reinterpret_cast<char*>(raw);

	data->s1 = std::string(rawdata, 8);
	data->n = *(reinterpret_cast<int*>(rawdata + 8));
	data->s2 = std::string(rawdata + 8 + sizeof(int), 8);

	return data;
}

int		main()
{
	void	*raw;
	Data	*data;

	raw = serialize();
	data = deserialize(raw);

	std::cout << "after deserialize:\n"
		<< "s1: " << data->s1 << "\n"
		<< "n: " << data->n << "\n"
		<< "s2: " << data->s2 << std::endl;
}
