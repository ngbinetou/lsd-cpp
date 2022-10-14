all: lib_mytp.a


lib_mytp.a : tp1Exo1.o tp1Exo2.o tp1Exo3.o tp1Exo4.o
 
	ar rcs lib_mytp.a tp1Exo1.o tp1Exo2.o tp1Exo3.o tp1Exo4.o
 


tp1Exo1.o : 
	gcc -c sources/tp1Exo1.c  -I ./includes

tp1Exo2.o :
	gcc -c sources/tp1Exo2.c  -I includes

tp1Exo3.o :
	gcc -c sources/tp1Exo3.c  -I includes

tp1Exo4.o :
	gcc -c sources/tp1Exo4.c  -I includes
	
	
clean:
	rm -rf *.o

fclean: clean
	rm $(NAME)
	
re: fclean all





