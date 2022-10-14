#include <stdlib.h>
#include <stdio.h>


int **dummy(int **x, int n)
{
	int **y;
	int i;
	int j;

	i = 0;
	y = (int**)malloc(sizeof(int*) * (n + 1));
	while (i < n)
	{
		y[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			y[i][j] = j;
			j++;
		}
		i++;
	}
	
	y[n] = x[0];


	//eliminons la fuite de memoire a ce niveau//
	for (i=1;1<n;i++)
	
		free (x[i]);

	free (x);
	
	
	return(y);
}

int main()
{
	int n;
	int **x;
	int i;
	int j;

	n = 10;
	i = 0;
	x = (int**)malloc(sizeof(int*) * n);
	while (i < n)
	{
		x[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			x[i][j] = j;
			j++;
		}
		i++;
	}
	

	x = dummy(x, n);
	i = 0;
	while (i < n + 1)
	{
		j = 0;
		while (j < n)
		{
			printf("%d ", x[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	//eliminons la fuite de memoire a ce niveau//
	for (i=0;1<n;i++)

		free (x[i]);
}
	
