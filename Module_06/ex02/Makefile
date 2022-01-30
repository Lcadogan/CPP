NAME	= a.out

SRC		= Identify.cpp

CC		= clang++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -g

.cpp.o:
	$(CC) $(FLAGS) -c $<

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