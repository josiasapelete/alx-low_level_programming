#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - function that prints a binary
 * @n: the number
 */

void print_binary(unsigned int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
