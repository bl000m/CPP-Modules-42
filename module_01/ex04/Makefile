# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 17:07:21 by mpagani           #+#    #+#              #
#    Updated: 2023/04/07 12:53:12 by mpagani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= filestream

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objects

FILES		= main Sed

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Sed.hpp

#Colors:
YELLOW		=	\e[93;5;226m
BACK_WHITE	=	\e[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) Makefile
	@$(CC) $(OBJ) -o $(NAME)
	@printf "\nI created the executable. Now you can enter $(YELLOW)./filestream + arg$(BACK_WHITE) to launch it.\n"
	@printf "\nRight $(YELLOW)arguments$(BACK_WHITE) sequence: file_in_name, occurrence_to_be_replaced, string_to_replace_with\n\n"
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
