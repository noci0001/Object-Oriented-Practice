NAME	=	brainz
GCC		=	c++ -g -Wall -Wextra -Werror -pedantic -std=c++98
SRC		=	main Zombie

SRCS	=	$(addsuffix .cpp, $(SRC));

all:	$(NAME)

clean:
	rm -rf $(NAME);

re:	clean all

$(NAME):
	$(GCC) -o $(NAME) $(SRCS)