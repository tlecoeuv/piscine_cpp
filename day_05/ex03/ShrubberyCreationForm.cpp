
#include "ShrubberyCreationForm.hpp"

//CANONICAL FUNCS

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
		Form("Shrubbery Creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
		Form(src.getName(), src.getSignGrade(), src.getExecuteGrade())
{
	*this = src;
	return;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream file(_target + "_shrubbery", std::ios::trunc);
	if (file.is_open() && file.good())
	{
		file << "                 #                 " << std::endl;
		file << "                ###                " << std::endl;
		file << "          #....## ##....#          " << std::endl;
		file << "           #### ### ####           " << std::endl;
		file << "     #........# ### #........#     " << std::endl;
		file << "        ######### #########        " << std::endl;
		file << "     #.....#### ### ####.....#     " << std::endl;
		file << "      #######  ## ##  #######      " << std::endl;
		file << "         ## ##### ##### ##         " << std::endl;
		file << "#..........## ### ### ##..........#" << std::endl;
		file << "    ####### ## ##### ## #######    " << std::endl;
		file << "       #####  #######  #####       " << std::endl;
		file << "                000                " << std::endl;
		file << "                000                " << std::endl;
		file << "...............O000O..............." << std::endl;
		file.close();
	}
}
