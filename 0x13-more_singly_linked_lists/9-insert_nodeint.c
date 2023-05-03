#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - function taht create new Node
 * @head: the list
 * @n: the data of the node
 * @idx: the position
 * Return: the address of the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos;
	listint_t *tmp, *newNode;

	if (head == NULL)
		return (NULL);


	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;


	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	if (idx != 0)
	{
		tmp = *head;

		for (pos = 0; pos < idx - 1 && tmp != NULL; pos++)
			tmp = tmp->next;

		if (tmp == NULL)
			return (NULL);
	}

	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
