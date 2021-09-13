/**
 * _memset- altenatve for memset for more in for use man
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: SAMPLE TO PRINT
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
