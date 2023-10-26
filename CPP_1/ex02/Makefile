NAME	=	HI_THIS_IS_BRAIN
GCC		=	c++ -Wall -Wextra -Werror -pedantic -g -std=c++98
SRC		=	main

SRCS	=	$(addsuffix .cpp, $(SRC));

all:	$(NAME)

clean:
	rm -rf $(NAME);

re:	clean all

$(NAME):
	$(GCC) -o $(NAME) $(SRCS)