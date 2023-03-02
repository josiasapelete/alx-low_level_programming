#include "main.h"
#include <string.h>
/**
 * _strcat - Function that concatenate
 * @dest: the destination of the strings
 * @src: the string that will be append to @dest
 * Return: the concatenate of the two strings
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);

	return (ptr);

}
