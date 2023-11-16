/*
 * File: print_list.c
 * Author: Your Name
 * Date: Date
 * Description: Print elements of a singly linked list
 */

#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes
 */
size_t print_list(const struct list_s *h)
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

/**
 * main - Example usage of the print_list function
 * Return: Always 0
 */
int main(void)
{
	/* Creating a sample linked list */
	struct list_s node1 = {"Hello", 5, NULL};
	struct list_s node2 = {"World", 5, NULL};
	struct list_s node3 = {NULL, 0, NULL};

	node1.next = &node2;
	node2.next = &node3;

	/* Printing the linked list and getting the number of nodes */
	size_t count = print_list(&node1);

	/* Printing the number of nodes */
	printf("Number of nodes: %lu\n", count);

	return (0);
}

