NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar_print.c \
	ft_putnbr_print.c \
	ft_putstr_print.c \
	ft_putuint_print.c \
	ft_putptr_print.c \
	ft_puthexupper_print.c \
	ft_puthexlow_print.c \
	ft_printf.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%c: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all