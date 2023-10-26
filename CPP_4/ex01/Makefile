NAME	=	Polymorphism
GCC		=	c++ -Wall -Wextra -Werror -pedantic -g -std=c++98
SRC		=	Animal Cat Dog WrongAnimal main WrongDog

SRCS	=	$(addsuffix .cpp, $(SRC));

all:	$(NAME)

clean:
	rm -rf $(NAME);

re:	clean all

$(NAME):
	$(GCC) -o $(NAME) $(SRCS)