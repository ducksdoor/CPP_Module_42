DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
YELLOW =		\033[0;93m

NAME = phone

CC = c++

CFLAG = -std=c++98 -Wall -Wextra -pedantic

SOURCES = main.cpp Phonebook.cpp Contact.cpp

OBJECT = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CC) $(CFLAG) $(OBJECT) -o $(NAME)
	@echo	" ${YELLOW}    .  $(DEF_COLOR)            .   .'.  ${YELLOW}   \   / $(DEF_COLOR)"
	@echo	" ${YELLOW}  \   / $(DEF_COLOR)     .'. .' '.'   ' ${YELLOW} -=  o  =- $(DEF_COLOR)"
	@echo	" ${YELLOW}-=  o  =-$(DEF_COLOR)  .'   '           ${YELLOW}   / | \ $(DEF_COLOR)"
	@echo	" ${YELLOW}  / | \ $(DEF_COLOR)    is posible      ${YELLOW}     | $(DEF_COLOR)"
	@echo	" ${YELLOW}    |  $(DEF_COLOR)       to use:            | "
	@echo	"     |        PhoneBook           | "
	@echo	"     |                      .=====| "
	@echo	"     |=====.                |.---.| "
	@echo	"     |.---.|                ||=o=|| "
	@echo	"     ||=o=||                ||   || "
	@echo	"     ||___||                |[:::]| "
	@echo	"     |[:::]|                '-----' "
	@echo	"     '-----' "


%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@


clean:
	rm -f $(OBJECT)
	@echo "\n${GRAY} ◎ $(RED)All objects and executable cleaned successfully${GRAY} ◎$(DEF_COLOR)\n"

fclean:			clean
				$(RM) $(NAME)

re: fclean all 


.PHONY:			all clean fclean re test