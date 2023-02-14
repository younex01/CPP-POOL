# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 13:41:26 by yelousse          #+#    #+#              #
#    Updated: 2023/02/14 15:34:14 by yelousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Harl.cpp
NAME = harlFilter

OBJCS = ${SRC:.cpp=.o}

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(SRC) -o $(NAME)
	@echo "Compiling Successfull"

%.o:%.cpp Harl.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJCS)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) $(NAME)
	@echo "Clear"

re: fclean all

.PHONY: all, clean, fclean, re