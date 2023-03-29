#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as param on each element of an array
 * @size: the size of the array
 * @action: pointer to the function you need
 * @array: the array
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
