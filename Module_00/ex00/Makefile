NAME	= megaphone

SRC		= megaphone.cpp

CC		= clang++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -g

OBJ	= $(SRC:.cpp=.o)

all:	$(NAME)
 
$(NAME):	$(OBJ)
			${CC} $(FLAGS) -o ${NAME} ${OBJ}

test:	$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re test