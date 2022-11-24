#include <stdlib.h>
#include<stdio.h>
#include <string.h>

//TO READ FROM THE FILE DESCRIPTOR
#include <unistd.h>

//FOR THE FUNCTION OPEN
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define SIZE_BUFF 66




//fonction pour la longueur de la chaine
int strlong(char* str)
{
	int	n=0;

	if (str)
	{
		while (str[n] != '\0')
			n=n+1;
		return (n);
	}
	return (1);
}







// fonction pour chercher un caractere dans un mot
char* strchrch(char *str, char c)
{
	int	n=0;

	
	while (str[n] != '\0')
	{
		if (str[n] == c)
			return (&str[n]);
		n=n+1;
	}
	return (0);
}







//fonction pour concatener 2 chaines
char* strconcat(char* c1, char* c2)
{
	int		i=0;
	char	*str;
	char	*r;

	
	if (c1== NULL || c2== NULL)
		return (0);

	char* c3 = (char*) malloc((strlong(c1)+strlong(c2)+1)*sizeof(char));


	for(i=0; c1[i]!='\0'; i++) 
		c3[i] = c1[i];

	i=0;
	for(i=0; c2[i]!='\0'; i++) 
		c3[strlong(c1)+i] = c2[i];

	c3[(strlong(c1)+strlong(c2)+1)]='\0';


	return (0);
}






// la fonction read_lines
char* read_lines (int fd)
{
	int i;
	int j;
	static char* tmp1;
	static char* tmp;
	tmp = (char*)malloc(SIZE_BUFF*(sizeof(char)));
	static int nbCalls;

	char* buf= malloc(SIZE_BUFF*(sizeof(char)));

	

	if(nbCalls && strchrch(tmp,'\n'))
	{
		for (i=0;i<strlong(tmp);i++)
		{
			while (tmp[i]!='\n')
			{
				j+=1;
				i+=1;
			}
			int k=j;

			if (j=(strlong(tmp)-1))
			
				return tmp;
				
			if (j<(strlong(tmp)-1))
			{
				char* tmpp= malloc(j*(sizeof(char)));
				for (i=0; i<j;i++)
				{
					
					tmpp[i]=tmp[k];
					k++;
					i+=1;
				}
				return tmpp;

	
				tmp1= malloc((strlong(tmp)-(j+1)+1)); //+1 for (\0)*(sizeof(char))) everywhere

				for(i=j+1;i<strlong(tmp);i++)
				{
					tmp1[i-(j+1)]=tmp[i];
					i+=1;
				}
				tmp1;
				free(tmp);
			
				free (tmpp);
			}		
		}
				
	}

	

	else
	{
		
		int r=read(fd, buf, SIZE_BUFF);
		

		for (i=0; i<SIZE_BUFF;i++)
		{
			if(strchrch(buf,'\n'))
			{
				while(i+1<SIZE_BUFF)
				{
					int k=0;
					tmp[k]=buf[i+1];
					i+=1;
					k+=1;		
				}
			}
			else
			printf("%s",buf);
	
		}
	}			
	
	nbCalls==1;

	return tmp1;

}






int main()
{		

		//si read=0 donc fichier est vide
		//concatener tmp1 avec le nouveau r pour obtenir le nouveau tmp;
		//tmp=strconcat(tmp1,r);

	
	int fd = open("/home/cecile/Documents/LSD2/test",664);
	char* buf= malloc(SIZE_BUFF*(sizeof(char)));
	int r=read(fd, buf, SIZE_BUFF);

	While(r!=0)
	{
		char* k=read_lines(fd);
		tmp= strconcat(tmp1,r);
	}



	return 0;
}



