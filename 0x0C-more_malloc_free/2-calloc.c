#include "main.h"

/**
 * _calloc - function that aloc memory for an array
 * and initialized it
 * @nmemb: number of the elements of the array
 * @size: the size of the type
 * Return: Null if it failed and a pointer else
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
