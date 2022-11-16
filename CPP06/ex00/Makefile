# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 21:35:06 by sahafid           #+#    #+#              #
#    Updated: 2022/11/02 09:45:04 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = casting.cpp convert.cpp main.cpp
OFILES = $(FILES:.cpp=.o)
HEADERS = casting.hpp

CC = c++
NAME = convert
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