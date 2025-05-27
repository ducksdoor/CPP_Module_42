DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
YELLOW =		\033[0;93m
BLUE =			\033[0;94m
GREEN =			\033[0;92m

NAME = megaphone

CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

SOURCES = megaphone.cpp

OBJECT = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CC) $(CFLAG) $(OBJECT) -o $(NAME)
	@echo "${GRAY}\n░░█▀▀▀▀▀▀▀▀▀▀▀▀▀▀█   ♪ "
	@echo "██▀▀▀██▀▀▀▀▀▀██▀▀▀██  ♪ "
	@echo "█▒▒▒▒▒█▒▀▀▀▀▒█▒▒▒▒▒█ ♫ " 
	@echo "█▒▒▒▒▒█▒████▒█▒▒▒▒▒█       ♫ ${YELLOW} now, you can use ./megaphone"
	@echo "${GRAY}██▄▄▄██▄▄▄▄▄▄██▄▄▄██    ♪♪ \n$(DEF_COLOR)"

%.o: %.cpp
	@echo "${BLUE} ◎ $(YELLOW)Compiling   ${RED}→   $(GREEN)$< $(DEF_COLOR)"
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJECT)
	@echo "\n${GRAY} ◎ $(RED)All objects and executable cleaned successfully${GRAY} ◎$(DEF_COLOR)\n"

fclean:			clean
				$(RM) $(NAME)

re: fclean all 

test: 		$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

.PHONY:			all clean fclean re test