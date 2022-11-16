# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 13:11:41 by sahafid           #+#    #+#              #
#    Updated: 2022/10/25 10:40:36 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ClapTrap.cpp main.cpp
OFILES = $(FILES:.cpp=.o)

CPP = c++
NAME = ClapTrap
FLAGS = -std=c++98 -Wall -Wextra -Werror
HEADER = clapTrap.hpp

all : $(NAME)

$(NAME) : $(OFILES) $(HEADER)
	@$(CPP) $(FLAGS) $(OFILES) -o $@

%.o:%.cpp
	@$(CPP) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all