#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array:- Where array is a pointer to the first element of the array to search in
 * @size:- is the number of elements in array
 * @value:-  is the value to search for
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
			return(i);
		}
		else if ( i == size-1)
		{
			return(-1);
		}
		
			
	}
	return(0);
}
