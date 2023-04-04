#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * print_listint - function that prints all the element of a list
 * @h: the heap
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}
	return (count);

}
