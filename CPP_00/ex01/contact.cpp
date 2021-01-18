#include "contact.hpp"

Contact::Contact()
{

}

void 	Contact::init()
{
	std::cout << "Please enter contact informations:" << std::endl;
	std::cout << "first name:" << std::endl;
	std::getline(std::cin, _first_name);
	std::cout << "last name:" << std::endl;
	std::getline(std::cin, _last_name);
	std::cout << "nickname:" << std::endl;
	std::getline(std::cin, _nickname);
	std::cout << "login:" << std::endl;
	std::getline(std::cin, _login);
	std::cout << "postal address:" << std::endl;
	std::getline(std::cin, _postal_address);
	std::cout << "email address:" << std::endl;
	std::getline(std::cin, _email_address);
	std::cout << "phone number:" << std::endl;
	std::getline(std::cin, _phone_number);
	std::cout << "birthday date:" << std::endl;
	std::getline(std::cin, _birthday_date);
	std::cout << "favorite meal:" << std::endl;
	std::getline(std::cin, _favorite_meal);
	std::cout << "underwear color:" << std::endl;
	std::getline(std::cin, _underwear_color);
	std::cout << "darkest_secret:" << std::endl;
	std::getline(std::cin, _darkest_secret);
}

void	Contact::print_res() const
{
	std::cout << std::setw(10) << std::setfill(' ');

	std::string tmp_first_name = _first_name.substr(0, 10);
	if (_first_name.size() > 10)
		tmp_first_name[9] = '.';
	std::string tmp_last_name = _last_name.substr(0, 10);
	if (_last_name.size() > 10)
		tmp_last_name[9] = '.';
	std::string tmp_nickname = _nickname.substr(0, 10);
	if (_nickname.size() > 10)
		tmp_nickname[9] = '.';

	std::cout << std::setw(10) << std::setfill(' ');
	std::cout << tmp_first_name << '|';
	std::cout << std::setw(10) << std::setfill(' ');
	std::cout << tmp_last_name << '|';
	std::cout << std::setw(10) << std::setfill(' ');
	std::cout << tmp_nickname << '|';
	std::cout << std::endl;
}

void	Contact::print_coord() const
{
	std::cout << "postal address: " << _postal_address << std::endl;
	std::cout << "email address: " << _email_address << std::endl;
	std::cout << "phone number: " << _phone_number << std::endl;
}
