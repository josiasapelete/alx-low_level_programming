#include "main.h"

/**
 * main - print all the arg it receive
 * @argc: the number of arg
 * @argv: array that contain all the name of args
 * Return: all args it receive
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
