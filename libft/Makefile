# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Directories
INC_DIR = include
SRC_DIR = src
OBJ_DIR = obj

# Source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
# wildcard : https://www.gnu.org/software/make/manual/html_node/Wildcard-Function.html

# Object files
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))
# patsubst : https://www.gnu.org/software/make/manual/html_node/Text-Functions.html

# Executable name
NAME = libft.a

# Target
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ_FILES)
	@ar rcs $(NAME) $(OBJ_FILES)
	@echo "libft.a created"

# Rule to create source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
# -p : no error if existing, make parent directories as needed
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
# -I $(INC_DIR) : specify the directory where the header files are located
	
# Clean object files and the library
clean:
	@rm -rf $(OBJ_DIR)
	@echo "Object files have been removed."

# Clean object files and the library
fclean: clean
	@rm -f $(NAME)
	@echo "Executable has been $(NAME) removed."

# rebuild everything
re: fclean all

# .PHONY is a special target that is used to execute the specified commands regardless of the file modification time.
.PHONY: all clean fclean re