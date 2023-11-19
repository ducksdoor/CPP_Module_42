NAME = megaphone

CC = g++

CFLAG = -std=c++98 -Wall -Wextra -pedantic

SOURCES = megaphone.cpp

OBJECT = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	$(CC) $(CFLAG) $(OBJECT) -o $(NAME) | lolcat
	@echo " ╔═══╗ ♪ " | lolcat
	@echo " ║███║ ♫ " | lolcat
	@echo " ║ (●)  ♫ you can use ./megaphone" | lolcat
	@echo " ╚═══╝ ♪♪ " | lolcat

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(NAME) $(OBJECT)