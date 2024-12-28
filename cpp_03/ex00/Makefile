
NAME = ClapTrap

CC = c++

CFLAGS = -Wall -Werror -Wextra #-std=c++98

SRCS = main.cpp ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
