NAME	= zombie_horde

SRC		= main.cpp Zombie.cpp ZombieHorde.cpp

CC		= clang++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror

OBJ	= $(SRC:.cpp=.o)

all:	$(NAME)
 
$(NAME):	$(OBJ)
			${CC} $(FLAGS) -o ${NAME} ${OBJ}

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re test