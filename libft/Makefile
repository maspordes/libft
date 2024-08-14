# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -I. -pedantic

# Source files
SRCS = $(wildcard *.c)

# Object files
OBJS = $(SRCS:.c=.o)

# Output executable
NAME = libft.a

# Targets
all: $(NAME)

# Create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJS)

# Remove object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re

