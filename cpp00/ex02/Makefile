# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 11:10:48 by sahafid           #+#    #+#              #
#    Updated: 2022/10/19 05:49:10 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = Account.cpp
OFILES = $(FILES:.cpp=.o)

CC = c++
NAME = Account
FLAGS = -std=c++98 -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : Account.hpp $(OFILES) tests.cpp
	@$(CC) $(FLAGS) $(OFILES) tests.cpp -o $@


%.o:%.cpp
	@$(CC) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all