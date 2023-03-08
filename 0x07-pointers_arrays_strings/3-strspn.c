#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string
 * @accept: the searchsubstr
 * Return: Returns the number of bytes
 *  in the initial segment of s which
 *  consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n, count;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				count = 1;

			}
		}

		if (count == 0)
		{
			return (n);
		}
	}

	return (n);
}
