GRAY =			\033[0;90m
RED =			\033[0;91m

NAME = phone

CC = g++

CFLAG = -std=c++98 -Wall -Wextra -pedantic

SOURCES = PhoneBook.cpp Contact.cpp init.cpp

OBJECT = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CC) $(CFLAG) $(OBJECT) -o $(NAME)
	@echo	"     .              .   .'.     \   / "| lolcat
	@echo	"   \   /      .'. .' '.'   '  -=  o  =- "| lolcat
	@echo	" -=  o  =-  .'   '              / | \ "| lolcat
	@echo	"   / | \     is posible           | "| lolcat
	@echo	"     |         to use:            | "| lolcat
	@echo	"     |     the old mobile         | "| lolcat
	@echo	"     |                      .=====| "| lolcat
	@echo	"     |=====.                |.---.| "| lolcat
	@echo	"     |.---.|                ||=o=|| "| lolcat
	@echo	"     ||=o=||                ||   || "| lolcat
	@echo	"     ||___||                |[:::]| "| lolcat
	@echo	"     |[:::]|                '-----' "| lolcat
	@echo	"     '-----' "| lolcat


%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

clean:
	@rm -f $(NAME) $(OBJECT)
	@echo "\n${GRAY} ◎ $(RED)All objects and executable cleaned successfully${GRAY} ◎$(DEF_COLOR)\n"

re: clean all 