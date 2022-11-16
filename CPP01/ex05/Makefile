# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 20:06:40 by sahafid           #+#    #+#              #
#    Updated: 2022/10/21 04:33:54 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = harl.cpp main.cpp
OFILES = $(FILES:.cpp=.o)

CPP = c++
NAME = harl
FLAGS = -std=c++98 -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OFILES) harl.hpp
	@$(CPP) $(FLAGS) $(OFILES) -o $@

%.o:%.cpp
	@$(CPP) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all