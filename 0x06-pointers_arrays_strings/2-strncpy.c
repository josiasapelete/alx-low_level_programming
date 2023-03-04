#include "main.h"

/**
 * _strncpy - function that copie a number char forom src to dest
 * @dest: the string to copy
 * @src: the source string
 * @n: number of char that will be copied
 *
 * Return: pointer to final result dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
