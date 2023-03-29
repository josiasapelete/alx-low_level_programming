#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array of int
 * @size: the size of the array
 * @cmp: pointer to the function
 * Return: the index of the first element for which cmp does
 * not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);

		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
		return (-1);
	}
}
