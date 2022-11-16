# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 18:10:49 by sahafid           #+#    #+#              #
#    Updated: 2022/10/22 00:53:14 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES = newZombie.cpp randomChump.cpp zombie.cpp
OFILES = $(FILES:.cpp=.o)

CPP = c++
NAME = zombie
FLAGS = -std=c++98 -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : main.cpp $(FILES) zombie.hpp
	$(CPP) $(FLAGS) main.cpp $(FILES) -o $@

%.o:%.cpp
	@$(CPP) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all