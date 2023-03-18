# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 22:05:45 by sahafid           #+#    #+#              #
#    Updated: 2023/03/18 12:36:49 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES = PmergeMe.cpp utils.cpp main.cpp
OFILES = $(FILES:.cpp=.o)
HEADERS = PmergeMe.hpp

CC = c++
NAME = PmergeMe
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