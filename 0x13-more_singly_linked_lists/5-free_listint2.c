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
	listint_t *curr = *head;
	listint_t *next;

		while (curr != NULL)
		{
			next = curr->next;
			free(curr);
			curr = next;
		}


	*head = NULL;
}
