NAME	=	repetitive_work
GCC		=	c++ -Wall -Wextra -Werror -pedantic -g -std=c++98
SRC		=	main ClapTrap ScavTrap FragTrap

SRCS	=	$(addsuffix .cpp, $(SRC));

all:	$(NAME)

clean:
	rm -rf $(NAME);

re:	clean all

$(NAME):
	$(GCC) -o $(NAME) $(SRCS)