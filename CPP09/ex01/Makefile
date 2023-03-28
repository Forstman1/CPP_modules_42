# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 17:21:36 by sahafid           #+#    #+#              #
#    Updated: 2023/03/19 18:31:34 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = RPN.cpp  main.cpp
OFILES = $(FILES:.cpp=.o)
HEADERS = RPN.hpp

CC = c++
NAME = RPN
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