#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the separator
 * @n: the numbers of num
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", va_arg(ptr, int);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("%d", va_arg(ptr, int));
	va_end(ptr);

	printf("\n");
}
