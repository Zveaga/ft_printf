NAME = libftprintf.a

SRC = \
ft_printf.c \
ft_print_ch_str.c \

OBJ_FILES = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re:
	fclean all

.PHONY: clean re fclean all
