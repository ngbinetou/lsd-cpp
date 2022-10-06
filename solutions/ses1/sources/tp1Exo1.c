#include "tp1.h"

void check_msd(int num)
{
	char x = 31;
	if ((num>>(x) & 1) ==1)
		printf("1");
	else
		printf("0");
}

