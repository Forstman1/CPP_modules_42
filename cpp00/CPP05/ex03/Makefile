# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 11:11:27 by sahafid           #+#    #+#              #
#    Updated: 2022/10/31 09:47:44 by sahafid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ShrubberyCreationForm.cpp Form.cpp Bureaucrat.cpp main.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OFILES = $(FILES:.cpp=.o)
HEADERS = ShrubberyCreationForm.hpp Form.hpp Bureaucrat.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

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