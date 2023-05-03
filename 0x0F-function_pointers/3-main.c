#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the main func
 * @argc: the number od args
 * @argv: array of all args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int nbr1, nbr2, answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	nbr1 = atoi(argv[1]);
	nbr2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	answer = f(nbr1, nbr2);

	printf("%d\n", answer);

	return (0);

}
