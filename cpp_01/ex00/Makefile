CC = g++ -Wall -Wextra -Werror -std=c++98 -g -o phonebook 

SRC =  Zombie.cpp main.cpp

NAME = Zombie

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME) 

fclean: clean	
	rm -f $(NAME) 

re : fclean all