#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * @n: the pointer to the bit
 * @index: the index
 * Return: 1 if it worked or -1 else
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setBit;
	unsigned int len;

	len = sizeof(unsigned long int) * 8 - 1;

	if (index > len)
		return (-1);

	setBit = 1 << index;
	*n = *n | setBit;

	return (1);
}
