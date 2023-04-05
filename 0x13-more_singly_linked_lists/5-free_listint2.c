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

	if (head == NULL)
	{
		return;
	}


		while ((*head)->next != NULL)
		{
			temp = *head;

			free(temp);
			*head = (*head)->next;
		}


		*head = NULL;
}
