NAME	= animals

SRC		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

CC		= clang++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror

OBJ	= $(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(CFLAGS) -c $<

all:	$(NAME)
 
$(NAME):	$(OBJ)
			${CC} $(FLAGS) -o ${NAME} ${OBJ}

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re test