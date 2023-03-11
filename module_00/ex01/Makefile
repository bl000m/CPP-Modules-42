# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 17:07:21 by mpagani           #+#    #+#              #
#    Updated: 2023/03/11 17:08:14 by mpagani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRCS 	=  phonebook.cpp

OBJS	= $(SRCS:.cpp=.o)

# compile
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -fr

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
