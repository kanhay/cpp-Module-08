# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 15:24:22 by khanhayf          #+#    #+#              #
#    Updated: 2024/03/07 17:42:54 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Mutant
CC = c++
FLAGSCPP = -Wall -Wextra -Werror -std=c++98
HEAD = MutantStack.hpp
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
