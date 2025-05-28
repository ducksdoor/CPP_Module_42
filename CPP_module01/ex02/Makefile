DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
YELLOW =		\033[0;93m
GREEN =			\033[0;92m

NAME = data

CC = c++

CFLAG =  -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp

OBJECT = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CC) $(CFLAG) $(OBJECT) -o $(NAME)
	@echo "${YELLOW}                  /^\   / -- )"
	@echo "                 / | \\ (____/"
	@echo "                / | | \\ / /"
	@echo "               /_|_|_|_/ /"
	@echo "                |     / /"
	@echo " __    __    __ |    / /__    __    __"
	@echo "[  ]__[  ]__[  ].   / /[  ]__[  ]__[  ]"
	@echo "|__            ____/ /___           __|"
	@echo "   |          / .------  )         |"
	@echo "   |         / /        /          |"
	@echo "   |        / /        /           |"


%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@


clean:
	rm -f $(OBJECT)
	@echo "\n${GRAY} ◎ $(RED)All objects and executable cleaned successfully${GRAY} ◎$(DEF_COLOR)\n"

fclean:			clean
				$(RM) $(NAME)

re: fclean all 


.PHONY:			all clean fclean re