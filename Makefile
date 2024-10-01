NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes
FILES = $(wildcard *.c)
OBJECTS = $(FILES:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
