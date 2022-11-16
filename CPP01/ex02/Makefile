# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 15:10:34 by sahafid           #+#    #+#              #
#    Updated: 2022/10/22 01:30:48 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = main.cpp
OFILES = $(FILES:.cpp=.o)

CPP = c++
NAME = seed
FLAGS = -std=c++98 -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(FILES) 
	$(CPP) $(FLAGS) $(FILES) -o $@

%.o:%.cpp
	@$(CPP) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
