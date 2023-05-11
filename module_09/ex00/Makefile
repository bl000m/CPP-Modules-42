# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathia <mathia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 13:45:27 by mpagani           #+#    #+#              #
#    Updated: 2023/05/11 12:49:24 by mathia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= btc

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objects

FILES		= main BitcoinExchange

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= BitcoinExchange.hpp

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
	@printf "\nI created the executable.\n"
	@printf "\nBefore going further please download the $(YELLOW)cpp_09.tgz$(BACK_WHITE) folder from the exercise page on the intra\n"
	@printf "\n=> Extract it using the command $(YELLOW)tar -xzvf cpp_09.tgz$(BACK_WHITE)\n"
	@printf "\n=> Move the data.csv contained in the etracted folder $(YELLOW)to the ex00 directory$(BACK_WHITE)\n"
	@printf "\n\nNow you can enter $(YELLOW)./btc input.txt$(BACK_WHITE) to launch the program.\n"
	@printf "\nNB: enter $(YELLOW)make fclean; make -n; make$(BACK_WHITE) if you want to see how I compile.\n\n"
	@printf "\n\n\n$(BOLD_WHITE)<<<<<<<<<<<<<<<<< But what is it all about ? >>>>>>>>>>>>>>>>$(BACK_WHITE)\n" 
	@printf "\n$(PURPLE)the BitcoinExchange project helps users find out \nhow much their Bitcoin was worth in US dollars on a specific date,\nusing an input file with dates and Bitcoin amounts \nand a database of exchange values. \nSo if you're curious about what your Bitcoin was worth back then,\nthis project has got you covered!$(BACK_WHITE)\n\n"
	@printf "$(BOLD_WHITE)<<<<<<<<<<<<<<<<< But what is it all about ? >>>>>>>>>>>>>>>>$(BACK_WHITE)\n\n" 


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
