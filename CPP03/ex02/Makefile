# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 09:29:09 by sahafid           #+#    #+#              #
#    Updated: 2022/10/25 09:29:58 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OFILES = $(FILES:.cpp=.o)

CPP = c++
NAME = fragtrap
FLAGS = -std=c++98 -Wall -Wextra -Werror
HEADER = clapTrap.hpp ScavTrap.hpp FragTrap.hpp

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