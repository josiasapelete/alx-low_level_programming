#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: the string
 * Return: pointer to capitalized
 */

char *cap_string(char *s)
{
	int i, j;

	char x[] = "\t\n,;.!?\"(){}";

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= ('a' - 'A');
	}
	while (s[i] != '\0')
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i - 1] == x[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= ('a' - 'A');
		}
		i++;
	}
	return (s);
}
