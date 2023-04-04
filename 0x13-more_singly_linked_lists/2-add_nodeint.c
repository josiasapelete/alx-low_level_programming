#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a list
 * @head: the heap
 * @n: the data;
 * Return: the address of a new elem or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newCol = malloc(sizeof(listint_t));

	if (newCol == NULL)
		return (NULL);

	newCol->n = n;
	newCol->next = *head;
	*head = newCol;

	return (*head);
}
