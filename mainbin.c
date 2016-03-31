#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main(void)
{
	int fd1;
	int longueur;
	char buf;

	FILE * fd2;
//	char * buf2;
	int buf2;
	size_t longueur2;

	printf("Ouverture de type texte\n");
	fd1 = open("blabla.txt",O_RDONLY);
	while ( (longueur = read(fd1, &buf, 1)) > 0)
	{
		printf("--%c--%x--\n",buf,buf);
	}
	close(fd1);

	printf("Ouverture de type bloc\n");
	fd2 = fopen("blabla.txt","rb");
	//fd2 = fopen("main.c","rb");

	while (1)
	{
		buf2 = getc(fd2);
		printf("--%x--\n",buf2);
		if (buf2 == EOF)
		{
			printf("EOF = %x\n",EOF);
			fclose(fd2);
			return (0);
		}
	}

}

