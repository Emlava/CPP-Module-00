#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook 	phonebook;

	while (true)
	{
		std::cout << std:: endl << "Please enter one of the following available commands: ADD, SEARCH or EXIT." \
			<< std::endl;
		while (command.empty())
		{
			std::cout << "> ";
			if (!std::getline(std::cin, command))
			{
				std::cout << std::endl;
				return (0);
			}
		}
		if (command == "ADD")
		{
			if (!phonebook.add_contact())
				return (1);
		}
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			return (0);
		command.clear();
	}
	return (0);
}
