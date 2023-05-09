#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>


/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters:number of letters to print
 * Return: the letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t toread;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	toread = read(file, buffer, letters);

	if (toread == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	if ((write(STDOUT_FILENO, buffer, toread)) == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);
	return (toread);


}
