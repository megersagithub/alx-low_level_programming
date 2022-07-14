#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @l: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *l)
{
	size_t nbr_nodes = 0;
	const list_t *current = l;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
