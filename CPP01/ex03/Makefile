# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 16:03:39 by sahafid           #+#    #+#              #
#    Updated: 2022/10/26 11:18:32 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = HumanA.cpp HumanB.cpp Weapon.cpp

CPP = g++
NAME = attack
FLAGS = -std=c++98 -Wall -Wextra -Werror


all : $(NAME)

$(NAME) : main.cpp $(FILES) HumanA.hpp HumanB.hpp Weapon.hpp
	$(CPP) $(FLAGS) main.cpp $(FILES) -o $@

%.o:%.cpp
	@$(CPP) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all