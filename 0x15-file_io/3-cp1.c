#include "main.h"
/**
 * op_cp - open file read and duplicate
 * @file: file to read from
 * @file1: to read to.
*/
void op_cp(char *file, char *file1)
{
	int fd  = open(file, O_RDONLY), size = 1024, c, c1;
	int fd1 = open(file1, O_CREAT | O_APPEND | O_RDWR, 0664);
	char *r_buf;
	ssize_t r, w;

	if (fd < 0)
	{
		err("Can't read from file ", file, "\n");
		exit(98);
	}
	r_buf = malloc(size);
	r = 1;
	while (r != -1)
	{
		r = read(fd, r_buf, size);
		w = write(fd1, r_buf, r + 1);

		if (w == -1)
		{
			err("Error: Can't write to ", file1, "\n");
			free(r_buf);
			exit(99);
		}
		if (w < size)
			break;
		free(r_buf);
		r_buf = malloc(size);
	}
	free(r_buf);
	c  = close(fd);
	c1 = close(fd1);
	if (c == (-1) || c1 == (-1))
	{
		err("Error: Can't close fd ", ("0" + c1), "\n");
		exit(100);
	}
}
