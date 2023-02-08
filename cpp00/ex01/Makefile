# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 02:40:27 by yelousse          #+#    #+#              #
#    Updated: 2023/02/08 08:14:07 by yelousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp	PhoneBook.cpp	main.cpp

NAME = PhoneBook

OBJCS = ${SRC:.cpp=.o}

G = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(G) $(FLAGS) $(SRC) -o $(NAME)
	@echo "Compiling Successfull"

%.o:%.cpp PhoneBook.hpp Contact.hpp
	$(G) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJCS)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) $(NAME)
	@echo "Clear"

re: fclean all

.PHONY: all, clean, fclean, re