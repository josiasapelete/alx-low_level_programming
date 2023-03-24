#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s;


	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
