#include "tp1.h"



void check_msd (int num)
{
	char x= 31;
	if ((num>>(x) & 1) ==1)
		printf("1");
	else
		printf("0");
}





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
	int i=-8;
	check_msd(i);
	printf("\n");

	unsigned char j=4;
	print_bits(j);
	printf("\n");

	return 0;
}


*/

