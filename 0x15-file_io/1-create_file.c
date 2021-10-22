#include "main.h"
/**
 * create_file - check the code
 * @filename: the name to use
 * @text_content: where to save
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_APPEND | O_WRONLY, 0600), i;
	int l = 0;

	if (fd == -1)
		return (fd);
	if (text_content == NULL)
		return (-1);
	while (text_content[l] != '\0')
	{
		l = l + 1;
	}
	printf("size of char %d\n", l);
	i = write(fd, text_content, l + 1);
	close(fd);

	if (i <= -1)
		return (-1);

	return (1);
}
