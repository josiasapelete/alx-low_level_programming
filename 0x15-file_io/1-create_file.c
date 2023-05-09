#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Function that create file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 if it work and -1 else
 */

int create_file(const char *filename, char *text_content)
{
	int file, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len =  0;

		while (text_content[len])
			len++;

	}

	file = open(filename, O_CREAT | O_RDWR, 0600);

	if (file == -1)
		return (-1);
	if ((write(file, text_content, len)) == -1)
		return (-1);

	close(file);
	return (1);
}
