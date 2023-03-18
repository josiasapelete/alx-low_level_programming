#include "main.h"

/**
 * array_range - function that creates an array of integer
 * @min: the min
 * @max: the max
 * Return: the pointer to the new created array
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i, len;


	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = (min + i);

	return (ptr);

}
