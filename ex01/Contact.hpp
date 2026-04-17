#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		// Constructor
		Contact();
		// Attributes
		std::string	first_name;
		std::string	last_name;
		std::string	phone_number;
		// Method
		void		set_darkest_secret(std::string secret);

	private:
		// Attribute
		std::string	darkest_secret;
};

#endif
