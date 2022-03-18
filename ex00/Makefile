FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++
FILE = main.cpp 
NAME = main 

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

re: fclean all 

$(NAME):
	$(CC) $(FLAGS) $(FILE) -o $@