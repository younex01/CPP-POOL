SRC = megaphone.cpp

NAME = megaphone

OBJCS = ${SRC:.cpp=.o}

G = g++

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(G) $(FLAGS) $(SRC) -o $(NAME)
	@echo "Compiling Successfull"

%.o:%.cpp megaphone.hpp
	$(G) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJCS)
	@echo "Object Files Removed Successfully"

fclean:clean
	@$(RM) all
	@echo "Clear"

re: fclean all

.PHONY: all, clean, fclean, re