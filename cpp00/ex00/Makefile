# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 19:49:32 by sahafid           #+#    #+#              #
#    Updated: 2022/09/19 12:28:41 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++
NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): megaphone.cpp
	@$(CC) $(FLAGS) megaphone.cpp -o $@

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean