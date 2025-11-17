# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/03 18:58:20 by alexigar          #+#    #+#              #
#    Updated: 2025/01/03 18:58:33 by alexigar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex05

CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp \
			Harl.cpp \

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