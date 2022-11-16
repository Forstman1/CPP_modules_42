# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 17:15:34 by sahafid           #+#    #+#              #
#    Updated: 2022/10/31 17:38:14 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = Data.cpp main.cpp
OFILES = $(FILES:.cpp=.o)
HEADERS = Data.hpp

CC = c++
NAME = serialize
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