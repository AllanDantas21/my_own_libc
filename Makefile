NAME = my_libc.a
CC = cc
INCLUDES = incs
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES)
FILES = $(shell find . -name "*.c" ! -name "tests.c" ! -path "./tests/*")
OBJDIR = objs
OBJECTS = $(patsubst %.c, $(OBJDIR)/%.o, $(FILES))
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)
	@echo "libc created"

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)
	$(RM) -r $(OBJDIR)

test: $(NAME)
	gcc -Iinc -Itest tests/tests.c tests/unity.c $(NAME) -o tests/tests

fclean: clean
	$(RM) $(NAME)
	$(RM) tests/tests

re: fclean all

.PHONY: all clean fclean re
