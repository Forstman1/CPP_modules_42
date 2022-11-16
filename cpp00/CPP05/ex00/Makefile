# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 11:50:40 by sahafid           #+#    #+#              #
#    Updated: 2022/10/31 09:47:32 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES = Bureaucrat.cpp main.cpp 
OFILES = $(FILES:.cpp=.o)
HEADERS = Bureaucrat.hpp 

CC = c++
NAME = bureaucrat
FLAGS = -std=c++98 -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OFILES) $(HEADERS)
	@$(CC) $(FLAGS) $(OFILES) -o $@

%.o:%.cpp $(HEADERS)
	@$(CC) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all