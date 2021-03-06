#include "main.h"
/**
 * append_text_to_file - check the code
 * @filename: the name to use
 * @text_content: where to save
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND | O_WRONLY, 0600), i, l = 0;

	if (fd == -1)
		return (fd);
	if (text_content == NULL)
		return (1);

	while (text_content[l] != '\0')
	{
		l = l + 1;
	}
	i = write(fd, text_content, l + 1);
	close(fd);

	if (i <= -1)
		return (-1);

	return (1);
}
