CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_addput.c  ft_putnbr.c  ft_uput.c  ft_putchar.c  ft_putstr.c  ft_xput.c  ft_printf.c
OBJS = $(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) rcs libftprintf.a $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all                   
