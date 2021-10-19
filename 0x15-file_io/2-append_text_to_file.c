#include "main.h"
/**
 * create_file - check the code
 * @filename: the name to use
 * @text_content: where to save
 * Return: Always 0.
 */
int int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND, O_WRONLY, 0600), i;

	if (fd == -1)
		return (fd);
	if (!text_content)
		return (1);

	i = write(fd, text_content, sizeof(text_content - 1));
	close(fd);

	if (i <= -1)
		return (-1);

	return (1);
}
