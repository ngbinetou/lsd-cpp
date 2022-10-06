# include <stdio.h>
int main()
{
	printf ("%d\n", 1>>1);
	printf ("%d\n", 1<<1);
	printf ("%d\n", 1<<2);
	return 0;
}


/*
1) An integer is stored in 32 bits

2) An integer is stored in 8 bytes

3) 
	0
	2
	4
Are printed

	Since we work with the binary form, a left shift by 1 adds a left 0 to the binary form and all the rest move to the right. So it is like it gets multiplied by 2.

4)An insigned char value range from 0 to 255

5) A char value range from -128 to 127

6) the first bit in the left

*/
