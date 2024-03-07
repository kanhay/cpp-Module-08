# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 16:05:44 by khanhayf          #+#    #+#              #
#    Updated: 2024/03/04 16:07:33 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CC = c++
FLAGSCPP = -Wall -Wextra -Werror -std=c++98
HEAD = span.hpp
SRC = main.cpp span.cpp
OBJ = main.o span.o
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGSCPP) $(OBJ) -o $@
	
%.o : %.cpp $(HEAD)
	$(CC) $(FLAGSCPP) -c $<

clean :
	$(RM) $(OBJ)
