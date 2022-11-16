# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 22:46:59 by sahafid           #+#    #+#              #
#    Updated: 2022/10/22 22:47:58 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = fixed.cpp main.cpp
OFILES = $(FILES:.cpp=.o)

CPP = c++
NAME = fixedpoint
FLAGS = -std=c++98 -Wall -Wextra -Werror
HEADER = fixed.hpp

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