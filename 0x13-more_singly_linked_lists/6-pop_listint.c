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
	int i;
	listint_t *n;

	if (head == NULL || *head == NULL)
		return (0);

	i = (*head)->n;
	n = (*head)->next;

	free(*head);
	*head = n;

	return (i);
}
