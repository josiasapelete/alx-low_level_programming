#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all the program args
 * @ac: point to argc
 * @av: point to argv
 * Return: NULL if ac == 0 or av == NULL ELSE pointer to a new str
 */

char *argstostr(int ac, char **av)
{
	int len, pos, i, j;
	char *arr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		/*calculate the length of all the args and +1 for the \n*/
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	len++; /*for the '\n'*/

	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arr[pos] = av[i][j];
		       pos++;
		}
		arr[pos] = '\n';
		pos++;

	}

	/*arr[pos] = '\0';*/
	return (arr);


}
