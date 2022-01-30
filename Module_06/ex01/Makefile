NAME	= a.out

SRC		= 		Serialization.cpp
 				

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
			$(RM) $(NAME) new_file_shrubbery

re:			fclean all

.PHONY:		all clean fclean re test