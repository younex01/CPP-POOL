# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 18:10:28 by yelousse          #+#    #+#              #
#    Updated: 2023/02/12 18:13:20 by yelousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Zombie.cpp zombieHorde.cpp
NAME = zombie

OBJCS = ${SRC:.cpp=.o}

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(SRC) -o $(NAME)
	@echo "Compiling Successfull"

%.o:%.cpp Zombie.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJCS)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) $(NAME)
	@echo "Clear"

re: fclean all

.PHONY: all, clean, fclean, re