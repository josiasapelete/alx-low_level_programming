#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenate 2 strings
 * @dest: the destination of the concat
 * @src: the string that would be concatenate
 * @n: it's the number of char of @src that will be concatenate to @dest
 *Return: the concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = NULL;
	int i;

	for (i = 0; i < n; i++)
	{
		dest += src[i];
	}

	ptr = dest;

	return (ptr);
}
