#include "Contact.hpp"
#include "PhoneBook.hpp"

// Contact method
void	Contact::set_darkest_secret(std::string secret)
{
	darkest_secret = secret;
	return ;
}

// PhoneBook methods

PhoneBook::PhoneBook(void)
{
	size = 0;
}

void	PhoneBook::add_contact(void)
{
	int		i;
	std::string	secret;

	if (size < 8)
		size++;
	i = size - 1;
	std::cout << "\nPlease enter all the required information." << std::endl;
	std::cout << "First name: ";
	while (contacts[i].first_name.empty())
		std::cin >> contacts[i].first_name; // LEFT OFF HERE: replace cin for getline()
	std::cout << "Last name: ";
	while (contacts[i].last_name.empty())
		std::cin >> contacts[i].last_name;
	std::cout << "Nickname: ";
	while (contacts[i].nickname.empty())
		std::cin >> contacts[i].nickname;
	std::cout << "Phone number: ";
	while (contacts[i].phone_number.empty())
		std::cin >> contacts[i].phone_number;
	std::cout << "Darkest secret: ";
	while (secret.empty())
		std::cin >> secret;
	std::cout << std::endl;
	contacts[i].set_darkest_secret(secret);
	return ;
}
