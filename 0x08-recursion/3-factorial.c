#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number.
 * @n: the number
 * Return:	f n < 0 , return -1
 *		factoriel de 0 est 1
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n + 1));
	}
}
