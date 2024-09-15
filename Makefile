# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/15 19:10:13 by ayzahrao          #+#    #+#              #
#    Updated: 2024/09/15 19:10:14 by ayzahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = src
INC_DIR = include
LIBFT_DIR = libft
OBJ_DIR = obj

# Source files
SRC_FILES = src/algo_1_to_5.c \
			src/algo_morethan5.c \
			src/error_handling.c \
			src/input_handling.c \
			src/main.c \
			src/operations/basic_operations.c \
			src/operations/ra_rb_rr_rra_rrb.c \
			src/operations/rrr.c \
			src/operations/sa_sb_ss_pa_pb.c
# SRC_FILES =	&(wildcard $(SRC_DIR)/*.c)
# SRC_FILES +=	&(wildcard $(SRC_DIR)/operations/*.c)

# Object files
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))
# patsubst : https://www.gnu.org/software/make/manual/html_node/Text-Functions.html

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
	@$(CC) $(CFLAGS)  -I $(INC_DIR) -c $< -o $@
# -I $(LIBFT_DIR) : specify the directory where the header files are located

# Rule to create executable
$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) -I $(INC_DIR)  $(OBJ_FILES) $(LIBFT) -o $(NAME)
# -I $(LIBFT_DIR) : specify the directory where the header files are located

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

test:
	@echo $(SRC_FILES)
	@echo $(OBJ_FILES)
# Phony targets
.PHONY: all clean fclean re