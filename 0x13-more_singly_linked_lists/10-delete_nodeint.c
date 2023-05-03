#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @head: the list
 * @index: the index
 * Return: 1 if it succeeded, -1 else
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prec, *curr;
	unsigned int pos;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	prec = *head;

	for (pos = 0; pos < (index - 1); pos++)
	{
		prec = prec->next;

		/*stop the loop if the prec don't exist */
		if (prec == NULL)
			return (-1);
	}

	curr = prec->next;

	if (curr == NULL)
		return (-1);

	prec->next = curr->next;
	free(curr);
	return (1);

}
