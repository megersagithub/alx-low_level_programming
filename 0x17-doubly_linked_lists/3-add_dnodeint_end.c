#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add a node at the end of a linked list
 * @head: The character to print
 * @n: string for the new node
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;


	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}


	while (temp->next)
		temp = temp->next;


	temp->next = new;
	new->prev = temp;


	return (new);
}
