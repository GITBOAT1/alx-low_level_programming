#include "main.h"


/**
 * read_textfile - printout what has bee read
 * @filename: file the file to read
 * @letters: the size of the fle
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY), i = 0;
	char *buf;

	buf = malloc(letters + 1);

	if ((fd == -1) || (!filename))
	{
		return (0);
	}



	read(fd, buf, letters);
	buf[letters + 1] = '\0';

	while (buf)
	{
		if (write(1, buf[i], 1) != -1)
			i = i + 1;
		else
			return (0);
	}
	return (i);
}
