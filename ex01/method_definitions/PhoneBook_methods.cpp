#include "methods.hpp"

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
	contacts[i].set_field_value("first_name", ask_for_value("First name: "));
	contacts[i].set_field_value("last_name", ask_for_value("Last name: "));
	contacts[i].set_field_value("nickname", ask_for_value("Nickname: "));
	contacts[i].set_field_value("phone_number", ask_for_value("Phone number: "));
	contacts[i].set_field_value("darkest_secret", ask_for_value("Darkest secret: "));
	return (1);
}

void	PhoneBook::search_contact(void)
{
	int	i = 0;	

	if (size == 0)
	{
		std::cout << "There are no contacts saved yet." << std::endl;
		return ;
	}
	while (i < size)
	{
		display_formatted_fields(i + 1, contacts[i]);
		i++;
	}
	std::cout << "\nSelect the index of one of the contacts shown above to see more information: ";
	if (!(std::cin >> i))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (i < 1 || i > size)
	{
		std::cout << "Index out of range." << std::endl;
		return ;
	}
	display_all_contact_info(contacts[i - 1]);
	return ;
}
