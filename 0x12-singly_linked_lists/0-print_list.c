#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		node_count++;
	}

	return (node_count);
}

