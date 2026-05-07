#include "../Contact.hpp"

void	Contact::set_field_value(std::string name, std::string value)
{
	if (name == "first_name")
		first_name = value;
	else if (name == "last_name")
		last_name = value;
	else if (name == "nickname")
		nickname = value;
	else if (name == "phone_number")
		phone_number = value;
	else if (name == "darkest_secret")
		darkest_secret = value;
	return ;
}

std::string	Contact::get_field_value(std::string field_name)
{
	if (field_name == "first_name")
		return (first_name);
	else if (field_name == "last_name")
		return (last_name);
	else if (field_name == "nickname")
		return (nickname);
	else if (field_name == "phone_number")
		return (phone_number);
	else if (field_name == "darkest_secret")
		return (darkest_secret);
	return ("");
}

