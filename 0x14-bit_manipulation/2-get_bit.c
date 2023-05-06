#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: the bit
 * @index: the given index
 * Return: the value or -1 if it failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;

	len = sizeof(unsigned long int) * 8;

	if (index >= len)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
