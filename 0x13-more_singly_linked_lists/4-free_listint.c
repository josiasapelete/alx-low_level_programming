#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: the list
 */

void free_listint(listint_t *head)
{
	free(head);
}
