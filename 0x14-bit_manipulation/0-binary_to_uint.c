#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary to unsigned int
 * @b: pointing to 0 or 1
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans, i;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);
	i++;
	}


	ans = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		ans <<= 1;
		if (b[i] == '1')
			ans += 1;
	}

	return (ans);
}
