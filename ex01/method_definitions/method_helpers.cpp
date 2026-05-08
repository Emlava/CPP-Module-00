#include "methods.hpp"

// add_contact() helper
std::string	ask_for_value(std::string prompt)
{
	std::string	value;

	while (value.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, value))
		{
			std::cout << std::endl;
			return ("Error.\n");
		}
	}
	return (value);
}

// search_contact() helpers
void	display_formatted_fields(int index, Contact contact)
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

void	display_all_contact_info(Contact contact)
{
	std::cout << "First name: " << contact.get_field_value("first_name") << std::endl;
	std::cout << "Last name: " << contact.get_field_value("last_name") << std::endl;
	std::cout << "Nickname: " << contact.get_field_value("nickname") << std::endl;
	std::cout << "Phone number: " << contact.get_field_value("phone_number") << std::endl;
	std::cout << "Darkest secret: " << contact.get_field_value("darkest_secret") << std::endl;
	return ;
}
