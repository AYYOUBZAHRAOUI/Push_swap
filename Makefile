# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = src
INC_DIR = include
LIBFT_DIR = libft
OBJ_DIR = obj


# Source files
SRC_FILES = $(wildcard $(SRC_DIR)/*c)
SRC_FILES += $(wildcard $(SRC_DIR)/operations/*c)

# Object files
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))


# Executable name
NAME = push_swap

# Libft
LIBFT = $(LIBFT_DIR)/libft.a

# Targets
all: $(LIBFT) $(NAME)

# Rule o create libft.a
$(LIBFT):
	@make -C $(LIBFT_DIR)

# Rule to create object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/operations
	@$(CC) $(CFLAGS) -c $< -o $@

# Rule to create executable
$(NAME): $(OBJ_FILES)
	@ar rcs $(NAME) $(OBJ_FILES) $(LIBFT)

# Rule to clean object files
clean:
# @rm *.o
	@rm -rf $(OBJ_DIR)
	@make -C libft clean
	@echo "Object files have been removed."

# Rule to clean object files and executable
fclean: clean
	@rm -f $(NAME)
	@make -C libft fclean
	@echo "Executable and libraries have been removed."

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re