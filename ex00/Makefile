# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 15:02:02 by khanhayf          #+#    #+#              #
#    Updated: 2024/03/04 15:51:57 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = finder
CC = c++
FLAGSCPP = -Wall -Wextra -Werror -std=c++98
HEAD = easyfind.hpp
SRC = main.cpp
OBJ = main.o
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGSCPP) $(OBJ) -o $@
	
%.o : %.cpp $(HEAD)
	$(CC) $(FLAGSCPP) -c $<

clean :
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)
	
re : fclean all