SRCS	= main.c $(wildcard draw_figure/*.c) $(wildcard figures/*.c)

OBJS	= $(SRCS:.c=.o)

HEADER	= figd.h

NAME	= draw

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror -o3

$(NAME): $(OBJS)
	$(CC) ${OBJS} -o $(NAME) -I ${HEADER}

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re draw
