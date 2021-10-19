#include "main.h"


/**
 * read_textfile - printout what has bee read
 * @filename: file the file to read
 * @letters: the size of the fle
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	int *buf;
	size_t i;

	buf = malloc(letters + 1);

	if ((fd == -1) || (!filename))
	{
		return (0);
	}



	read(fd, buf, letters);
	buf[letters + 1] = '\0';


	i = write(1,  &buf, letters);

	free(buf);
	close(fd);
	return (i);
}
