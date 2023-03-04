#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array that will be reverse
 * @n: number of array element
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;
	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
