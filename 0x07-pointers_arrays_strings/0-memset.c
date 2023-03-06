#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: the address of the array
 * @b: the coose char
 * @n: the numbers of byte to be change
 * Return: change array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
