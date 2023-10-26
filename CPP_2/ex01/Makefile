NAME	=	Towards_a_more_useful_fixed-point_number_class
GCC		=	c++ -Wall -Wextra -Werror -pedantic -g -std=c++98
SRC		=	main Fixed

SRCS	=	$(addsuffix .cpp, $(SRC));

all:	$(NAME)

clean:
	rm -rf $(NAME);

re:	clean all

$(NAME):
	$(GCC) -o $(NAME) $(SRCS)