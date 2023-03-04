#include "main.h"

/**
 * string_toupper -  function that changes all
 * lowercase letters of a string to uppercase.
 * @str: char that will change to uppercase
 * Return: return the uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}

	return (str);
}
