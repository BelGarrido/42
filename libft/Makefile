.PHONY := all clean fclean

CC   := gcc -Wall -Werror -Wextra
LINKERFLAG := -lm

NAME := libft.a
OBJS := ft_isalpha.o \
		ft_isdigit.o \
		ft_isalnum.o \
		ft_isascii.o \
		ft_isprint.o \
		ft_strlen.o \
		ft_memset.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_memmove.o \
		ft_strlcpy.o \
		ft_strlcat.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strncmp.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_strnstr.o \
		ft_atoi.o \
		ft_calloc.o \
		ft_strdup.o \
		ft_substr.o \
		ft_strjoin.o \
		ft_strmapi.o \
		ft_striteri.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putendl_fd.o \
		ft_putnbr_fd.o 

all: ${NAME}

NAME: ${NAME}

${NAME}: libft.h ${OBJS}
	@echo "Creating library archive $@..."
	ar rcs ${NAME} ${OBJS}

%.o: %.c
	@echo "Creating object file '$@'..."
	${CC} -c $< -o $@

clean:
	@echo "Cleaning up..."
	rm -rvf ${OBJS}

fclean:
	@echo "Removing library archive ${NAME}..."
	rm -rvf ${NAME}

# bonus:
# 	@echo "Compiling bonus functions..."
