SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c
	ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c
	ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c
	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c
	ft_isprint.c ft_toupper.c
OUT = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o
	ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o
	ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o
	ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o
	ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o
	ft_isprint.o ft_toupper.o
MAIN = main.c
PROG = main
LIB = libft.a

all:
	gcc -c $(SRC)
	ar -cvq $(LIB) $(OUT)
	gcc -o $(PROG) $(MAIN) $(LIB)

clean:
	rm -f $(OUT)

fclean:
	rm -f $(MAIN) $(LIB)

re: clean fclean all
