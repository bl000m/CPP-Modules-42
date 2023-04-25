# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 13:45:27 by mpagani           #+#    #+#              #
#    Updated: 2023/04/13 10:52:48 by mpagani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= animal

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objects

FILES		= WrongAnimal main Animal Dog Cat WrongCat

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= WrongAnimal.hpp Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp

#Colors:
YELLOW		=	\e[93;5;226m
BACK_WHITE	=	\e[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) Makefile
	@$(CC) $(OBJ) -o $(NAME)
	@printf "\nI created the executable. Now you can enter $(YELLOW)./animal$(BACK_WHITE) to launch it.\n"
	@printf "Or enter $(YELLOW)make fclean; make -n; make$(BACK_WHITE) to see how I compile.\n\n"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "\nI removed all the object files as you asked\n\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "I removed the executable as you asked\n\n"

re: fclean all

