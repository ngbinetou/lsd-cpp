
NAME = libbitwise.a

SRCS = srcs/print_bits.c srcs/print_msb.c srcs/print_bits_flashy.c srcs/print_nth_byte.c
OBJS = print_bits.o print_msb.o print_bits_flashy.o print_nth_byte.o 

all: $(NAME)

$(NAME):
	gcc -c $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf *.o

fclean: clean
	rm $(NAME)
	
