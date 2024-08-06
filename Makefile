# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# source files
SRC_FILES = main.c 	\
			error_handling.c \
			input_file.c \
			operations/basic_operations.c \
			operations/operations_1.c

# Executable name
NAME = push_swap

# Libft
LIBFT = libft/libft.a

# Targets
all: $(LIBFT) $(NAME)

# object files # when you need to creat a object files from the srcfiles
OBJ_FILES = $(SRC_FILES:.c=.o)

%.o: %.C
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES) $(LIBFT)

$(LIBFT):
	@make -C libft

clean:
# @rm *.o
	@rm -rf operations/*.o *.o
	@make -C libft clean
	@echo "Object files have been removed."

fclean: clean
	@rm -f $(NAME)
	@make -C libft fclean
	@echo "Executable and libraries have been removed."

re: fclean all

.PHONY: all clean fclean re