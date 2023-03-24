#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function that return the sum of all input
 * @n:the number of arg
 * Return: 0 if n = 0 and sum else
 */

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);

}
