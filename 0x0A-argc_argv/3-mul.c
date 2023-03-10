#include "main.h"

/**
 * main - program that multiplie two numbers
 * @argc: the number of args
 * @argv: array that contain the name of all args
 * Return: the axb
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}


	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
