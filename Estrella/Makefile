NAME := libftprintf.a
CC := cc
CC_FLAGS := -Wall -Wextra -Werror 
HEADERS := ft_printf.h
SRC_FILES := ft_len.c ft_printf.c f_hex.c ft_itoa.c ft_print_char.c\
	printf_format.c 
OBJ_FILES := $(SRC_FILES:%.c=%.o)

all: $(NAME)

bonus : all

$(NAME): $(OBJ_FILES)
	ar -rcs $(NAME) $(OBJ_FILES)

%.o: %.c $(HEADERS)
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all bonus re
