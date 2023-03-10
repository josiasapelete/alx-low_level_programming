#include "main.h"

/**
 * main - prints the number of arg passed into it
 * @argc: the number of arg
 * @argv: array that contain the name of all arg
 *
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
