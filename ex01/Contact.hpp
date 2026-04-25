#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		// Attributes
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		// Methods
		void		set_field_name(std::string field_name, std::string value);
		std::string	get_field_value(std::string field_name);
};

#endif
