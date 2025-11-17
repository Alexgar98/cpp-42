# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/31 10:40:13 by alexigar          #+#    #+#              #
#    Updated: 2024/12/31 10:40:39 by alexigar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp \

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