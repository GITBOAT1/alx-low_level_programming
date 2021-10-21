#include "main.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * err - print error msg;
 * @e: msg argument.
*/
void err(char *e)
{
	int i;

	i = 0;

	while(e[i] != '\0')
	{
		_putchar(e[i]);
		i = i + 1;
	}
}

/**
 * op_cp - open file read and duplicate
 * @file: file to read from
 * @file: to read to.
*/
void op_cp(char *file, char *file1)
{
	int fd  = open(file,O_RDONLY);
	int size = 1024, l = 0, c, c1;
	int fd1 = open(file1, O_CREAT | O_APPEND | O_WRONLY, 0666);
	char *r_buf, *s;
	ssize_t r, w;


	if (fd < 0)
	{
		err("Can't read from file ");
		err(file);
		err("\n");
		exit(98);
	}

       	r_buf = malloc(size);
	r = 1;
	while (r != -1)
	{
		r = read(fd, r_buf, size);
		printf("read--> %ld\n",r);
		w = write(fd1, r_buf, r);

		if (w == -1)
		{
			err("Error: Can't write to ");
			err(file1);
			err("\n");
			free(r_buf);
			exit(99);
		}
		if (w < size)
			break;
		free(r_buf);
		l = l + 1;
		r_buf = malloc(size);
	}

	free(r_buf);
	c  = close(fd);
	c1 = close(fd1);
	if (c == (-1) || c1 == (-1))
	{
		err("Error: Can't close fd ");
		err("/n");
		exit(100);
	}



}

int main(int ac, char **av)
{
	int res;



	if (ac != 3)
	{
		err("Usage: cp file_from file_to");
		err("\n");
		exit(97);
	}

	printf("--------on the op,cp------------------\n");
	op_cp(av[1],av[2]);

}
