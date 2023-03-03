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
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}

	return (dest);
}
