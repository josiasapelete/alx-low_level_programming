#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: Returns a pointer to the first occurrence
 * of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
