# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 14:48:41 by yelousse          #+#    #+#              #
#    Updated: 2023/02/13 14:50:03 by yelousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
NAME = main

OBJCS = ${SRC:.cpp=.o}

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(SRC) -o $(NAME)
	@echo "Compiling Successfull"

%.o:%.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJCS)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) $(NAME)
	@echo "Clear"

re: fclean all

.PHONY: all, clean, fclean, re