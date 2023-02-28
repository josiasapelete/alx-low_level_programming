#include "main.h"
#include <string.h>

/**
 * print_rev - function that print the reverse of a string
 * @s: the string
 */

void print_rev(char *s)
{
	int length, i;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
