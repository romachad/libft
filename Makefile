CC := gcc
CFLAGS := -Wall -Wextra -Werror
LIB_SRC := ft_strdup.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c
OBJ := $(shell echo $(LIB_SRC)|sed 's/\.c/\.o/g')

all: libft.a

libft.a: $(OBJ)
	ar -crs $@ $^

$(OBJ): %.o: $(LIB_SRC)
	$(CC) -c $^ $(CFLAGS)

fclean: clean
	rm -f libft.a

clean:
	rm -f $(OBJ)

re: fclean all
