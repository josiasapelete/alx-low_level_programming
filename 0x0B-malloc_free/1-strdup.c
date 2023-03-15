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
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str(j); j++)
		j++;

	ptr = malloc(sizeof(char) * j);

	if (ptr == NULL)
		return (NULL);


	for (i = 0; i < j; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);

}
