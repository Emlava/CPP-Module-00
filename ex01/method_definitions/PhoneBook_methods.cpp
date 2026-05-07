#include "../Contact.hpp"
#include "../PhoneBook.hpp"

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
static void	display_formatted_fields(int index, Contact contact)
{
	std::string	curr_field;

	std::cout << std::right;
	std::cout << '|' << std::setw(10) << index;
	curr_field = contact.get_field_value("first_name");
	if (curr_field.size() > 10)
	{
		curr_field.resize(10);
		curr_field[9] = '.';
	}
	std::cout <<  '|' << std::setw(10) << curr_field;

	curr_field = contact.get_field_value("last_name");
	if (curr_field.size() > 10)
	{
		curr_field.resize(10);
		curr_field[9] = '.';
	}
	std::cout <<  '|' << std::setw(10) << curr_field;

	curr_field = contact.get_field_value("nickname");
	if (curr_field.size() > 10)
	{
		curr_field.resize(10);
		curr_field[9] = '.';
	}
	std::cout <<  '|' << std::setw(10) << curr_field << '|' << std::endl;
	std::cout << std::left;
	return ;
}

// Helper
static void	display_all_contact_info(Contact contact)
{
	std::cout << "First name: " << contact.get_field_value("first_name") << std::endl;
	std::cout << "Last name: " << contact.get_field_value("last_name") << std::endl;
	std::cout << "Nickname: " << contact.get_field_value("nickname") << std::endl;
	std::cout << "Phone number: " << contact.get_field_value("phone_number") << std::endl;
	std::cout << "Darkest secret: " << contact.get_field_value("darkest_secret") << std::endl;
	return ;
}

void	PhoneBook::search_contact(void)
{
	if (size == 0)
	{
		std::cout << "There are no contacts saved yet." << std::endl;
		return ;
	}

	int	i = 0;	

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
