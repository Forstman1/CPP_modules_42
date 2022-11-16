# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 23:29:48 by sahafid           #+#    #+#              #
#    Updated: 2022/11/07 12:17:46 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = main.cpp 
OFILES = $(FILES:.cpp=.o)
HEADERS = MutantStack.hpp

CC = c++
NAME = MutantStack
FLAGS = -std=c++98 -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OFILES) 
	@$(CC) $(FLAGS) $(OFILES) -o $@

%.o:%.cpp $(HEADERS)
	@$(CC) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all