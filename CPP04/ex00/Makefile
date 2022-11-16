# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 12:29:16 by sahafid           #+#    #+#              #
#    Updated: 2022/10/28 11:04:48 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp
OFILES = $(FILES:.cpp=.o)

CPP = c++
NAME = Animal
FLAGS = -std=c++98 -Wall -Wextra -Werror
HEADER = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

all : $(NAME)

$(NAME) : $(OFILES) $(HEADER)
	@$(CPP) $(FLAGS) $(OFILES) -o $@

%.o:%.cpp $(HEADER)
	@$(CPP) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all