DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
REDP =    		\033[1;91m
YELLOW =		\033[0;93m
GREEN =			\033[0;92m
BLUE =          \033[0;94m
BROWN = 		\033[0;33m
PINK =			\033[0;35m

NAME = Brain

CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp \
			Animal.cpp Dog.cpp Cat.cpp \
			WrongCat.cpp WrongAnimal.cpp \
			Brain.cpp

OBJECT = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CC) $(CFLAG) $(OBJECT) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@


clean:
	rm -f $(OBJECT)
	@echo "\n${GRAY} ◎ $(RED)All objects and executable cleaned successfully${GRAY} ◎$(DEF_COLOR)\n"

fclean:			clean
				$(RM) $(NAME)

re: fclean all 


.PHONY:			all clean fclean re