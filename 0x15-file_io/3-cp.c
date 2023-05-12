#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"


/**
 * main - function that copies file and paste it in another file
 * @argc: the number of args
 * @argv: contain all the args names
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file1, file2;


	if (argc != 2)
	{
		printf("cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);

	if (file1 == -1)
	{
		printf("Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC);

	if (file2 == -1)
	{
		printf("Can't write to %s \n", argv[2]);
		exit(99);
	}

	return (0);
}
