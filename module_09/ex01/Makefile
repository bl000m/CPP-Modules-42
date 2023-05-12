# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathia <mathia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 13:45:27 by mpagani           #+#    #+#              #
#    Updated: 2023/05/12 08:14:28 by mathia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= RPN

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objects

FILES		= main RPN

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= RPN.hpp

#Colors:
YELLOW		=	\e[1;33m
GREEN		=	\e[1;32m
BLUE		=	\e[1;34m
PURPLE		=	\e[1;35m
UNDER_WHITE	=	\e[4;37m
BOLD_WHITE	=	\e[1;37m
BACK_WHITE	=	\e[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) Makefile
	@$(CC) $(OBJ) -o $(NAME)
	@printf "\nI created the executable. Now you can enter $(YELLOW)./RPN + <RPN expression>$(BACK_WHITE)to launch it.\n" 
	@printf "\n\n$(BOLD_WHITE)<<<<<<<<<<<<<<<<< Math in a nutshell >>>>>>>>>>>>>>>>$(BACK_WHITE)\n" 
	@printf "\n$(BOLD_WHITE)What is a Reverse Polish Notation Expression ?$(BACK_WHITE)\n"
	@printf "\n$(PURPLE)it's a mathematical notation where operators come after their operands.$(BACK_WHITE)\n"
	@printf "\n$(BLUE)NB$(BACK_WHITE)\n"
	@printf ".only number $(PURPLE)between 0 and 9 $(BACK_WHITE)are allowed for this exercise\n"
	@printf ".the entire RPN expression should be written $(PURPLE)between quotes$(BACK_WHITE)\n"
	@printf "\n$(BLUE)TIPS$(BACK_WHITE)\n"
	@printf ".to have the right number of operands and operators remember that: $(PURPLE)OPERATORS = OPERANDS - 1$(BACK_WHITE)\n"
	@printf ".THE OPERANDS AND OPERATORS ORDER MATTERS ! THAT IS: \n"
	@printf "$(UNDER_WHITE)the first operator met execute the operation between the last 2 operands and so on$(BACK_WHITE)\n"
	@printf "\n\n$(BOLD_WHITE)Examples:$(BACK_WHITE)\n"
	@printf "\n\n$(YELLOW)3 4 + 2 *$(BACK_WHITE) => 3 + 4 = 7 => 7 * 2 = $(YELLOW)14$(BACK_WHITE)\n"
	@printf "\n\n$(YELLOW)2 5 * 6 +$(BACK_WHITE) => 2 * 5 = 10 => 10 + 6 = $(YELLOW)16$(BACK_WHITE)\n"
	@printf "\n\n$(YELLOW)4 5 6 * + 7 /$(BACK_WHITE) => 5 * 6 = 30 => 30 + 4 = 34 => 34 / 7 = $(YELLOW)4.857$(BACK_WHITE)\n\n"

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
