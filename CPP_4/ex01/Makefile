NAME	= I_do_not_want_to_set_the_world_on_fire
GCC		=	c++ -Wall -Wextra -Werror -pedantic -g -std=c++98
SRC		=	Animal Cat Dog WrongAnimal main WrongDog Brain

SRCS	=	$(addsuffix .cpp, $(SRC));

all:	$(NAME)

clean:
	rm -rf $(NAME);

re:	clean all

$(NAME):
	$(GCC) -o $(NAME) $(SRCS)