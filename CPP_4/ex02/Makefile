NAME	= Abstract_class
GCC		=	c++ -Wall -Wextra -Werror -pedantic -g -std=c++98
SRC		=	main Animal Dog Cat WrongAnimal WrongCat Brain

SRCS	=	$(addsuffix .cpp, $(SRC));

all:	$(NAME)

clean:
	rm -rf $(NAME);

re:	clean all

$(NAME):
	$(GCC) -o $(NAME) $(SRCS)