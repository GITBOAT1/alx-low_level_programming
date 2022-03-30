#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
  	size_t i;
	for (i= 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
	  	{	
			return(array[i]);
		}
		else if ( i == size)
		{
			return(-1);
		}
		
			
	}
	return(0);
}
