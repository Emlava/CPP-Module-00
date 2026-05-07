#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "cctype"

void	remove_whitespace(std::string &command)
{
	size_t	i = 0;
	size_t	command_len;

	while (std::isspace(command[i]))
		i++;
	if (i)
		command.erase(0, i);
	command_len = command.length();
	if (!command_len)
		return ;
	i = command_len - 1;
	while (std::isspace(command[i]))
		i--;
	if (++i != command_len)
		command.erase(i, command_len - i);
	return ;
}

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
		remove_whitespace(command);
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
