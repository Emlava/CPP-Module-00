#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook 	phonebook;

	while (true)
	{
		std::cout << "Please enter one of the following available commands: ADD, SEARCH or EXIT." \
			<< std::endl << "> ";
		std::cin >> command;
		if (command == "ADD")
			phonebook.add_contact();
/*		else if (command == "SEARCH")
			phonebook.search_contact(); */
		else if (command == "EXIT")
			return (0);
	}
	return (0);
}
