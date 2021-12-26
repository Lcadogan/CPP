NAME	= fixed2

SRC		= main.cpp Fixed.cpp

CC		= c++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror

OBJ	= $(SRC:.cpp=.o)

all:	$(NAME)
 
$(NAME):	$(OBJ)
			${CC} -g $(FLAGS) -o ${NAME} ${OBJ}

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re test