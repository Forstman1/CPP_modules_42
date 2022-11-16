# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 15:30:56 by sahafid           #+#    #+#              #
#    Updated: 2022/10/19 05:48:42 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = set_info.cpp get_info.cpp contact.cpp
OFILES = $(FILES:.cpp=.o)

CC = c++
NAME = phonebook
FLAGS = -std=c++98 -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : PhoneBook.cpp $(OFILES) PhoneBook.hpp Contact.hpp
	@$(CC) $(FLAGS) phonebook.cpp $(OFILES) -o $@

%.o:%.cpp
	@$(CC) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all