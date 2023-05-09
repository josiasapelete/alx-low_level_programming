#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"


/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the file name
 * @text_content: the content
 * Return: 1 if it work and -1 else
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	len = 0;
	while (text_content[len] != '\0')
		len++;
	if (write(file, text_content, len) == -1)
		return (-1);

	close(file);

	return (1);
}
