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


	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ptr, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ptr, char*));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
