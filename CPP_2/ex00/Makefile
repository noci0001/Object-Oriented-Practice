NAME	=	My_First_Class_in_Orthodox_Canonical_Form
//Using appropriate flags for compiling C++98 code
GCC		=	c++ -Wall -Wextra -Werror -pedantic -g -std=c++98
SRC		=	main Fixed

SRCS	=	$(addsuffix .cpp, $(SRC));

all:	$(NAME)

clean:
	rm -rf $(NAME);

re:	clean all

$(NAME):
	$(GCC) -o $(NAME) $(SRCS)