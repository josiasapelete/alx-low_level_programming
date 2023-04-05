#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;

		free(temp);
		*head = (*head)->next;
	}

	free(*head);
	*head = NULL;
}
