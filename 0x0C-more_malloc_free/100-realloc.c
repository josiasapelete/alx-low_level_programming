#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocate a memory
 * @ptr: the pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: the address
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	char *_ptr, *copy;

	if (ptr == NULL)
	{
		_ptr = malloc(new_size);

		if (_ptr == NULL)
			return (NULL);

		return (_ptr);
	}
	if (new_size == old_size)
		return (ptr);


	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	_ptr = malloc(new_size);

	if (_ptr == NULL)
		return (NULL);

	copy = ptr;

	size = (new_size > old_size) ? old_size : new_size;

	for (i = 0; i < size; i++)
		_ptr[i] = copy[i];

	free(ptr);

	return (_ptr);
}
