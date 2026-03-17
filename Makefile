NAME		=	libft.a
SOURCES		=	fat_array.c
OBJECTS		=	$(patsubst %.c,build/%.o,$(SOURCES))
HEADER		=	libft.h
CC			=	clang
SAN			=	-fsanitize=address,undefined -ggdb
CFLAGS		=	-Wall -Wextra -Werror

.PHONY: all clean fclean re
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^

build/%.o:%.c
	-mkdir build
	$(CC) $(CFLAGS) $(SAN) -c $^ -o $@

clean:
	-rm -rf build

fclean: clean
	-rm $(NAME)

re: fclean all
