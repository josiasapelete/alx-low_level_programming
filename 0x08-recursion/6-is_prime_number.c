#include "main.h"

/**
 * check_prime - check if the number is prime
 * @div: ther diviser
 * @num: the number
 *
 * Return: 1 if prime,else 0
 */

int check_prime(int div, int num)
{
	if (num < 2 || num % div == 0)
		return (0);
	else if (div > num / 2)
		return (1);
	else
		return (check_prime(div + 1, num));
}

/**
 * is_prime_number - check if number is prme
 * @n:the number
 *
 * Return: 1 if true , O else
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
