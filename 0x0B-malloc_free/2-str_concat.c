#include "main.h"

/**
 * str_concat - Function that concatenate Two strings
 * @s1: the first string
 * @s2: the string that will be append to the @s1
 * Return: The new sting if all is good and Null on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, s1len, s2len, length;
	char *ptr = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";

	s1len = strlen(s1);
	s2len = strlen(s2);
	length = s1len + s2len + 1;

	ptr = malloc(sizeof(char) * length);

	if (ptr == NULL)
		return (NULL);


	for (i = 0; i < s1len; i++)
		ptr[i] = s1[i];


	for (j = 0; j < s2len; j++)
	{
		ptr[i] += s2[j];
		i++;
	}

	return (ptr);
}
