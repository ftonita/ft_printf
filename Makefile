SRCS = ft_printf.c \
		ft_strlen.c \
		ft_strncmp.c

OBJ=$(SRCS:.c=.o)

NAME = libftprintf.a

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror -I.

CC = gcc

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ 
all: $(NAME)
re: fclean $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
rm:
	fclean all
list:
	ar -t $(NAME)
.PHONY:
	all clean fclean rm