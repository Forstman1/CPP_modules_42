# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 15:31:45 by sahafid           #+#    #+#              #
#    Updated: 2022/10/24 15:32:23 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ClapTrap.cpp main.cpp ScavTrap.cpp
OFILES = $(FILES:.cpp=.o)

CPP = c++
NAME = scavTrap
FLAGS = -std=c++98 -Wall -Wextra -Werror
HEADER = clapTrap.hpp ScavTrap.hpp

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