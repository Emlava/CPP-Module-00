#include "Contact.hpp"
#include "PhoneBook.hpp"

// Contact methods
void	Contact::set_field_value(std::string name, std::string value)
{
	if (name == "first_name")
		first_name = value;
	else if (name == "last_name")
		last_name = value;
	else if (name == "nickname")
		nickname = value;
	else if (name == "phone_number")
		phone_number = value;
	else if (name == "darkest_secret")
		darkest_secret = value;
	return ;
}

std::string	Contact::get_field_value(std::string field_name)
{
	if (field_name == "first_name")
		return (first_name);
	else if (field_name == "last_name")
		return (last_name);
	else if (field_name == "nickname")
		return (nickname);
	else if (field_name == "phone_number")
		return (phone_number);
	else if (field_name == "darkest_secret")
		return (darkest_secret);
	return ("");
}

// PhoneBook methods

// Constructor
PhoneBook::PhoneBook(void) { size = 0; }

int	PhoneBook::add_contact(void)
{
	int		i;
	std::string	value;

	if (size < 8)
		size++;
	i = size - 1;
	std::cout << "\nPlease enter all the required information." << std::endl;
	while (value.empty())
	{
		std::cout << "First name: ";
		if (!std::getline(std::cin, value))
		{
			std::cout << std::endl;
			return (0);
		}
	}
	contacts[i].set_field_value("first_name", value);
	value.clear();
	while (value.empty())
	{
		std::cout << "Last name: ";
		if (!std::getline(std::cin, value))
		{
			std::cout << std::endl;
			return (0);
		}
	}
	contacts[i].set_field_value("last_name", value);
	value.clear();
	while (value.empty())
	{
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, value))
		{
			std::cout << std::endl;
			return (0);
		}
	}
	contacts[i].set_field_value("nickname", value);
	value.clear();
	while (value.empty())
	{
		std::cout << "Phone number: ";
		if (!std::getline(std::cin, value))
		{
			std::cout << std::endl;
			return (0);
		}
	}
	contacts[i].set_field_value("phone_number", value);
	value.clear();
	while (value.empty())
	{
		std::cout << "Darkest secret: ";
		if (!std::getline(std::cin, value))
		{
			std::cout << std::endl;
			return (0);
		}
	}
	contacts[i].set_field_value("darkest_secret", value);
	value.clear();
	return (1);
}

// Helper
// static void	display_field()

int	PhoneBook::search_contact(void)
{
	if (size == 0)
	{
		std::cout << "There are no contacts saved yet.\n" << std::endl;
		return (1);
	}

	int	i = 0;

	while (i < size)
	{
		cout << '|'; // LEFT OFF HERE: calculate if truncation is needed with string.size
	}
}
