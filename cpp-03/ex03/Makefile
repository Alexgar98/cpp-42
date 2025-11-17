NAME = ex03

CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = ClapTrap.cpp \
			main.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp \

OBJS = $(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(OBJS) -g -o $(NAME)

%.o : %.cpp
	@$(CC) -c $(CCFLAGS) $< -o $@

clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re