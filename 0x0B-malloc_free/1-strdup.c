#include "main.h"

/**
 * _strdup - Funtionthzt return a pointer to new alloc space
 * which contain a copy of the string given as aparam
 * @str: the string
 * Return: NULL if str = NULL, point to the copy else
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int length = strlen(str);

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * length);

	if (ptr == NULL)
		return (NULL);


	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);

}
