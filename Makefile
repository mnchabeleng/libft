SRC = src/*.c
OUT = *.o
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
