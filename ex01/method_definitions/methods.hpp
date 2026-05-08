#ifndef METHODS_HPP
# define METHODS_HPP
# include "../Contact.hpp"
# include "../PhoneBook.hpp"

std::string	ask_for_value(std::string prompt);
void		display_formatted_fields(int index, Contact contact);
void		display_all_contact_info(Contact contact);

#endif
