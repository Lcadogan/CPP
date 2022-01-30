NAME	= ex02

SRC		= main.cpp mutantstack.cpp

CC		= c++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -std=c++98 -g

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