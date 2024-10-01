NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes
FILES = $(wildcard *.c)
OBJECTS = $(FILES:.c=.o)
BONUS = $(wildcard *_bonus.c)
BONUS_OBJECTS = $(BONUS:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

bonus: $(BONUS_OBJECTS)
	ar -rcs $(NAME) $(BONUS_OBJECTS)

$(BONUS_OBJECTS): $(BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)

clean:
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
