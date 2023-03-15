#include "main.h"

/**
 * _strdup - funtion that return a pointer
 * to a new string
 * @str: The string that will be duplicated
 * Return:  NULL if str = NULL or insufficient
 *memory and pointer else
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, length;

	ptr = NULL;

	if (str == NULL)
		return (NULL);
	length = strlen(str);

	ptr = malloc(sizeof(char) * length);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);

}
