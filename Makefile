NAME = libftprintf.a
CC = cc
FLAGS: -Wall -Wextra -Werror
SRCS =
OBJS = (SRCS:.c=.o)

all: $(NAME)
	ar rcs $(NAME) $(OBJS)

clean: $(OBJS)
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME) $(OBJS)

re:


.PHONY: re all clean fclean