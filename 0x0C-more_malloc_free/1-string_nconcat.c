#include "main.h"

/**
 * string_nconcat - function that concatenates two str
 * @s1: the first str
 * @s2: the second str
 * @n: the number of bytes of s2
 * Return: NULL on fail and the conca else
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	unsigned int  s1len, s2len, length;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = strlen(s1);
	s2len = strlen(s2);

	if (n >= s2len + 1)
		n = s2len;

	length = s1len + n + 1;
	str = malloc(sizeof(char) * length);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[length] = '\0';

	return (str);

}
