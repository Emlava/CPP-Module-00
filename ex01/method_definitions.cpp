#include "Contact.hpp"
#include "PhoneBook.hpp"

// Contact methods
// Constructor
Contact::Contact()
{
	first_name = "";
	last_name = "";
	phone_number= "";
	darkest_secret = "";
}

// Method to handle the private attribute darkest_secret
void	Contact::set_darkest_secret(std::string secret)
{
	darkest_secret = secret;
	return ;
}

// PhoneBook methods
