#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the bit
 * @index: the index
 * Return: 1 if it worked and -1 else
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int opp;
	unsigned int len;

	len = sizeof(unsigned long int) * 8 - 1;

	if (index > len)
		return (-1);

	opp = ~(1 << index);
	*n = *n & opp;

	return (1);
}
