NAME 	=	ex02
HDR		=	main.h ClapTrap.h ScavTrap.h FragTrap.h
SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ		=	$(patsubst %.cpp,%.o,$(SRC))

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

%.o:		%.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
