#include "contact.hpp"

using namespace std;

Contact::Contact()
{

}

void Contact::init()
{
	cout << "Please enter contact informations:" << endl;
	cout << "first name:" << endl;
	cin >> m_first_name;
	cout << "last name:" << endl;
	cin >> m_last_name;
	cout << "nickname:" << endl;
	cin >> m_nickname;
	cout << "login:" << endl;
	cin >> m_login;
	cout << "postal address:" << endl;
	cin >> m_postal_address;
	cout << "email address:" << endl;
	cin >> m_email_address;
	cout << "phone number:" << endl;
	cin >> m_phone_number;
	cout << "birthday date:" << endl;
	cin >> m_birthday_date;
	cout << "favorite meal:" << endl;
	cin >> m_favorite_meal;
	cout << "underwear color:" << endl;
	cin >> m_underwear_color;
	cout << "darkest_secret:" << endl;
	cin >> m_darkest_secret;
}

void	Contact::print()
{
	cout << m_first_name << " | " << m_last_name << " | " << m_nickname << endl;
}
