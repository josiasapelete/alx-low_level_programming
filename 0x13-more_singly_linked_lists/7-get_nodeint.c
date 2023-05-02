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
	listint_t *temp = head;
	unsigned int pos;
	unsigned int len;

	if (head == NULL)
		return (NULL);

	len = 0;

	while (head)
	{
		len++;
		head = (head->next);
	}

	if (index > len)
		return (NULL);

	for (pos = 0; pos != index; pos++)
	{
		temp = temp->next;
	}

	return (temp);
}
