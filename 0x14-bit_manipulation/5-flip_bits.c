#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: the number
 * @m: the new number
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int test, middle;
	unsigned int len, num, i;

	test = 1;
	middle = n ^ m;
	num = 0;
	len = sizeof(unsigned long int) * 8;

	for (i = 0; i < len; i++)
	{
		if (test == (middle & test))
			num++;

		test <<= 1;
	}
	return (num);

}
