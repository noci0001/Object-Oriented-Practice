NAME	=	Unnecessary_violence
GCC		=	c++ -Wall -Wextra -Werror -pedantic -g -std=c++98
SRC		=	main HumanA HumanB Weapon

SRCS	=	$(addsuffix .cpp, $(SRC));

all:	$(NAME)

clean:
	rm -rf $(NAME);

re:	clean all

$(NAME):
	$(GCC) -o $(NAME) $(SRCS)