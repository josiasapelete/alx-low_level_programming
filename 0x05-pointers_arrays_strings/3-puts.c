#include "main.h"

/**
 * _puts - printf  a string, followed by a new line, to stdout.
 * @str: the string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);

	}
	_putchar('\n');
}

