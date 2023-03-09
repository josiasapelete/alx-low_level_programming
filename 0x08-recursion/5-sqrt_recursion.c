#include "main.h"

/**
 * sqrt_check - Function that check the square root
 * @i: the possible value of the square root
 * @n: the number
 * Return: the value of the sqrt
 */

int sqrt_check(int i, int n)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	return (sqrt_check((i + 1), n));
}

/**
 * _sqrt_recursion - Function that return the
 * natural square root
 * @n: the number
 * Return: the natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_check(1, n));
}
