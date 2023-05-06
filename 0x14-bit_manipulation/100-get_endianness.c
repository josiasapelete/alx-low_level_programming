#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	char *b;
	int i;

	i = 1;

	b = (char *)&i;

	return (*b);
}
