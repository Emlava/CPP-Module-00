#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		// Attributes
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		// Method
		void		set_darkest_secret(std::string darkest_secret);

	private:
		// Attribute
		std::string	darkest_secret;
};

#endif
