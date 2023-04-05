#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n)
 * @head: the list
 * Return: the head node's data or 0 if the linked os empty
 */

int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (*head == NULL)
		return (0);
	p = *head;
	*head = (*head)->next;
	i = (*head)->n;
	free(p);
	return (i);
}
