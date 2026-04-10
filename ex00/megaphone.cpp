#include <iostream>
#include <string>
#include <cctype>

void	uppercase(std::string &str)
{
	int	strlen = str.length();
	int	i = 0;

	while (i < strlen)
	{
		if (isalpha(str[i]) && islower(str[i]))
			str[i] = toupper(str[i]);
		i++;
	}
	return ;
}

int	main(int ac, char *av[])
{
	int		i = 1;
	std::string	str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"; 
	else
	{
		while (i < ac)
		{
			str = av[i];
			uppercase(str);
			std::cout << str;
			i++;
		}
		std::cout << '\n';
	}
	return (0);
}
