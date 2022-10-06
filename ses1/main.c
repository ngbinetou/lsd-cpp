#include "includes/bitwise.h" 

int main()
{
	unsigned char byte;
	int num;
    int m;
    int n;

	printf("%d\n", 1 >> 1);
	printf("Enter a number <= 255 to print its binary: ");
	scanf("%hhu", &byte);
	print_bits(byte);
	print_bits_flashy(byte);
	printf("Enter an integer to check its msb: ");
	scanf("%d", &num);
	check_msb(num);

	printf("Enter two integers n then m, to print the nth byte of m");
    scanf("%d%d", &n, &m);
    print_nth_byte(n, m);
}
