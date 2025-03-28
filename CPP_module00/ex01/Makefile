GRAY =			\033[0;90m
RED =			\033[0;91m

NAME = phone

CC = g++

CFLAG = -std=c++98 -Wall -Wextra -pedantic

SOURCES = main.cpp PhoneBook.cpp

OBJECT = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CC) $(CFLAG) $(OBJECT) -o $(NAME)
	@echo	"     .              .   .'.     \   / "|
	@echo	"   \   /      .'. .' '.'   '  -=  o  =- "|
	@echo	" -=  o  =-  .'   '              / | \ "|
	@echo	"   / | \     is posible           | "|
	@echo	"     |         to use:            | "|
	@echo	"     |        PhoneBook           | "|
	@echo	"     |                      .=====| "|
	@echo	"     |=====.                |.---.| "|
	@echo	"     |.---.|                ||=o=|| "|
	@echo	"     ||=o=||                ||   || "|
	@echo	"     ||___||                |[:::]| "|
	@echo	"     |[:::]|                '-----' "|
	@echo	"     '-----' "|


%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@


clean:
	rm -f $(OBJECT)
	@echo "\n${GRAY} ◎ $(RED)All objects and executable cleaned successfully${GRAY} ◎$(DEF_COLOR)\n"

fclean:			clean
				$(RM) $(NAME)

re: fclean all 


.PHONY:			all clean fclean re test