#include <stdlib.h>
#include<stdio.h>
#include <string.h>

//TO READ FROM THE FILE DESCRIPTOR
#include <unistd.h>

//FOR THE FUNCTION OPEN
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define SIZE_BUFF 8



char* readlines (int fd)
{

	char* buf= malloc(sizeof(char));

	static char *tmp= malloc(SIZE_BUFF*(sizeof(char)));

	while()
	{
		r=read(fd, buf, SIZE_BUFF);

		for(int i=0; i<SIZE_BUFF;i++)
		{
			if(strch(r,'\n'))
			{
				while(i+1<SIZE_BUFF)
				{
					tmp+=r[i+1];
					i+=1;
				}
			}
				EXIT()

		}
		
		
	}

	return 

}





int main()
{

	int fd = open("/home/cecile/bureau/test",664);



	return 0;
}