#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>

class PhoneBook
{
	public:
		// Attribute
		Contacts	contacts[8];
		// Methods
		void		add_contact(void); // Ask the user for the contact information here
		void		search_contact(void); // Check behavior in subject
		void		exit(void); // Quit the program
};

#endif
