#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - Function that create file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 if it work and -1 else
 */

int create_file(const char *filename, char *text_content)
{
	int file, w, len;


	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}


	for (len = 0; text_content[len];)
		len++;

	w = write(file, text_content, len);

	if (w == -1 || file == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
