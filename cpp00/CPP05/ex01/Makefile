# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 11:50:43 by sahafid           #+#    #+#              #
#    Updated: 2022/10/31 09:47:39 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES = Form.cpp Bureaucrat.cpp main.cpp 
OFILES = $(FILES:.cpp=.o)
HEADERS = Form.hpp Bureaucrat.hpp  

CC = c++
NAME = bureaucrat
FLAGS = -std=c++98 -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OFILES) $(HEADERS)
	@$(CC) $(FLAGS) $(OFILES) -o $@

%.o:%.cpp $(HEADERS)
	@$(CC) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all