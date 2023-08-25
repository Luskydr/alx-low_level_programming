#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_linked_list - Prints the elements of a linked list.
 * @head: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_linked_list(const list_t *head)
{
	int node_count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[Node %d] (nil)\n", node_count);
		}
		else
		{
			printf("[Node %d] %s (Length: %d)\n", node_count, head->str, head->len);
		}

		node_count++;
		head = head->next;
	}

	return (node_count);
}
