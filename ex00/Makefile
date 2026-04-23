NAME = megaphone
CPPC =  c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = megaphone.cpp

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CPPC) $(FLAGS) $(SOURCE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
