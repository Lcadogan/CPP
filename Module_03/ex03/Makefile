NAME	= diamond

SRC		= main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

CC		= c++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -Wshadow -Wno-shadow

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