#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>

class PhoneBook
{
	private:
		// Attributes
		Contact		contacts[8];
		int		size;
	public:
		// Constructor
		PhoneBook();
		// Methods
		void		add_contact(void);
//		void		search_contact(void);
		void		exit(void);
};

#endif
