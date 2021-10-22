#include "main.h"
#include "_putchar.c"
#include "print.c"

/**
 * read_textfile - printout what has bee read
 * @filename: file the file to read
 * @letters: the size of the fle
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf;
	int i;

	buf = malloc(letters + 1);

	if ((fd == -1) || (filename == NULL))
	{
		return (0);
	}



	read(fd, buf, letters);
	buf[letters - 1] = '\0';


	i = print1(buf);
	if (i == (-1))
		return (0);
	free(buf);
	close(fd);
	return (i + 1);
}
