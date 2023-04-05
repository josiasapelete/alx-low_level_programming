#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: the list
 * @n: the data
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newCol = malloc(sizeof(listint_t));

	if (newCol == NULL)
		return (NULL);

	newCol->n = n;
	newCol->next = NULL;

	if (*head == NULL)
		*head = newCol;
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newCol;
	}

	return (*head);
}
