#include "tp1.h"

void print_bits(unsigned char byte)
{

	for (int i = 7; i>=0; i--)
	{
		
		if ((byte >> i) & 1 ==1)
			printf("1");
		else
			printf("0");
	}
}



/*
int main()
{
	unsigned char i=4;
	print_bits(i);
	printf("\n");
	
	return 0;
}

*/
