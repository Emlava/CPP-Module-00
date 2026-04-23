#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>

class PhoneBook
{
	public:
		// Constructor
		PhoneBook();
		// Attribute
		Contact		contacts[8];
		// Methods
		void		add_contact(void);
//		void		search_contact(void);
		void		exit(void);
	private:
		// Attribute
		int		size;
};

#endif
