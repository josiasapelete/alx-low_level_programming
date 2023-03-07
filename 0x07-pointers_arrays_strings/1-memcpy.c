#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: the array of destinantion
 * @src: the source which will be append
 * @n: number of bytes which will be append
 *
 * Return: return a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		j--;
	}
	return (dest);
}
