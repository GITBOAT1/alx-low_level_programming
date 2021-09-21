#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: for chaecker sake  the size of the memory to print
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int *ptr, **arr, len, i, j, count = 0;

	len = sizeof(int *) * width + sizeof(int) * height * width;
	arr = (int **)malloc(len);

	ptr = (int *)(arr + width);

	for (i = 0; i < width; i++)
		arr[i] = (ptr + height * i);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = ++count;
	for (i = 0; i < width; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
