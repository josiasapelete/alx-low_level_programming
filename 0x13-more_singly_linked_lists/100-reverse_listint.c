#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverse a list
 * @head: the list
 * Return: the reverse of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prec, *next;

	prec = NULL;

	while (*head != NULL)
	{
	next = (*head)->next;
	(*head)->next = prec;
	prec = *head;
	*head = next;
	}

	*head = prec;
	return (*head);
}
