#include "tp1.h"

void print_nth_byte(int n, int m)
{
	int i,j,k;
	j=8*n;
	k=j-8;
	for(i=j-1; i>=k; i--)
	{
		if ((m >> i) & 1 ==1)
			printf("1");
		else
			printf("0");
	}
}


/*

int main()
{
	int m=4;
	int n=1;
	print_nth_byte(n,m);
	printf("\n");

}
*/
