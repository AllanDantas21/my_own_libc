NAME = libft.a
CC = cc
INCLUDES = incs
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES)
FILES = $(shell find . -name "*.c")
OBJDIR = objs
OBJECTS = $(patsubst %.c, $(OBJDIR)/%.o, $(FILES))
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
