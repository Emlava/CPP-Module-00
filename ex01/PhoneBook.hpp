#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <limits>

class PhoneBook
{
	private:
		// Attributes
		Contact		contacts[8];
		int		size;
		int		curr_contact;
	public:
		// Constructor
		PhoneBook();
		// Methods
		int		add_contact(void);
		void		search_contact(void);
};

#endif
