#include <stdlib.h>
//#include <sys/types.h>
//#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int fd1;
	char *buf;
	size_t len;
	FILE *fd2;
	unsigned char buf[1];

	buf = malloc(1);
/*
	fd1 = open("blabla.txt", O_RDONLY);
	while ((len = read(fd1, buf, 1)) > 0)
	{
		printf("--%c--%x--\n", *buf, *buf);
	}

	close (fd1);
	return (0);
}
*/
	fopen("blabla.txt", "rb");

	while (len = fread(buf, buf[1], 1, fd2) > 0)
	{
		printf("--%c--%x--\n", *buf, *buf);
	}

	close (fd2);
	return (0);
}
