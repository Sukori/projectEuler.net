NAME	= euler.out
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
HSRC	= euler.h
SRC		= main.c
PDIR	= problems
PSRC	= m35.c
OBJ_DIR	= obj
OBJS	= $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o)) $(addprefix $(OBJ_DIR)/, $(PSRC:.c=.o))

all: $(NAME)
	@echo "$(NAME) compiled. Run with 'make run'"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(PDIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "cleaning..."
	@rm -rf $(OBJ_DIR) $(NAME)

re: clean
	@make all --no-print-directory

run:
	@./$(NAME)

.PHONY : all clean run re
