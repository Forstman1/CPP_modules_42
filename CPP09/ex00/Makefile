# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 15:03:59 by sahafid           #+#    #+#              #
#    Updated: 2023/03/16 16:46:52 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = BitcoinExchange.cpp utils.cpp main.cpp
OFILES = $(FILES:.cpp=.o)
HEADERS = BitcoinExchange.hpp

CC = c++
NAME = btc
FLAGS = -std=c++98

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