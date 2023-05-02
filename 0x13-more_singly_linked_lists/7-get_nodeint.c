#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function that return the node at the given index
 * @head: the list
 * @index: the position
 * Return: NULL if the node does'nt exit ELSE the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos;

	if ((head == NULL) || (pos > index))
		return (NULL);

	listint_t *temp = head;

	for (pos = 0; pos != index; pos++)
	{
		temp = temp->next;
	}

	return (temp);
}
