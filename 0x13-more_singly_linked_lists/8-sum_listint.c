#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that return the sum oall date in the list
 * @head: the list
 * Return: 0 IF the list is empty ELSE the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += (head->n);
		head = head->next;
	}

	return (sum);

}
