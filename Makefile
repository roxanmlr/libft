NAME			=	libft.a
SOURCES			=	fat_array.c
OBJECTS			=	$(patsubst %.c,build/%.o,$(SOURCES))
HEADER			=	libft.h
TEST_NAME		=	test.elf
TEST_SOURCES	=	test_fat_array.c
TEST_OBJECTS	=	$(patsubst %.c,build/%.o,$(TEST_SOURCES))
CC				=	clang
SAN				=	-fsanitize=address,undefined 
CFLAGS			=	-Wall -Wextra -Werror -ggdb

.PHONY: all clean fclean re test
all: $(NAME) test

$(NAME): $(OBJECTS)
	ar rcs $@ $^

build/%.o:%.c
	-mkdir build
	$(CC) $(CFLAGS) $(SAN) -c $^ -o $@

clean:
	-rm -rf build

fclean: clean
	-rm $(NAME) $(TEST_NAME)

re: fclean all

test: $(TEST_NAME)

$(TEST_NAME): $(NAME) $(TEST_OBJECTS) 
	$(CC) $(CFLAGS) $(SAN) -o $@ $(TEST_OBJECTS) -L. -lft
