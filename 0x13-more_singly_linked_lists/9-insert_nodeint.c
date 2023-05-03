#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * CreateNewNode - function taht create new Node
 * @next: the pointer too the next element
 * @data: the data of the node
 * Return: the address of the node
 */

listint_t *CreateNewNode(listint_t *next, int data)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = data;
	newNode->next = next;

	return (newNode);
}

/**
 * push - function that inserts a node at the end
 * @head: the list
 * @n: the data
 * Return:return the list
 */

listint_t *push(listint_t **head, int n)
{
	listint_t *newNode = CreateNewNode(NULL, n);
	listint_t *temp = *head;


	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}


	while (temp->next != NULL)
		temp = (temp)->next;

	(temp)->next = newNode;
	return (newNode);

}
/**
 * insert_nodeint_at_index - function that inserts a node at a given index
 * @head: the list
 * @idx: the position
 * @n: the data
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *tmp, *prec;
	unsigned int len, pos;

	tmp = *head;
	len = 0;

	if (*head == NULL)
		return (NULL);
	while (tmp)
	{
	len++;
	tmp = (tmp)->next;
	}
	if (idx == 0)
	{
	*head = CreateNewNode(*head, n);
	return (*head);
	}


	if (idx == len)
	{
		return (push(head, n));
	}

	if (idx > len)
		return (NULL);

	prec = *head;
	tmp = *head;

	for (pos = 0; pos < idx; pos++)
	{
		prec = tmp;
		tmp = tmp->next;
	}

	prec->next = CreateNewNode(tmp, n);

	return (*head);

}
