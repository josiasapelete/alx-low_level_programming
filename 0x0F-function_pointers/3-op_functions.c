#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * op_add - function that return te sum
 * @a: the first nbr
 * @b: the second nbr
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that return the diff
 * @a: the first nbr
 * @b: the second nbr
 * Return: the diff
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that return te multiplication
 * @a: the first nbr
 * @b: the second nbr
 * Return: the mult
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that return the div
 * @a: the first nbr
 * @b: the second nbr
 * Return: the div
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function that return the remaind
 * @a: the first nbr
 * @b: the second nbr
 * Return: the remaind
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
