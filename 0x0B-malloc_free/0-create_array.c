#include "main.h"

/**
 *create_array - functio,, that creates an array
 *and initializes it with specific char
 *@size: size
 *@c: the char that would be append
 *Return: NULL if @size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i = 0;

	ptr = malloc(sizeof(unsigned int) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;

		}
	}
	return (ptr);
}
