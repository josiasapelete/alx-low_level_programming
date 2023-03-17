#include "main.h"

/**
 * malloc_checked - function that allocated memory
 * @b: the size of the memory
 * Return: the pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);

}
