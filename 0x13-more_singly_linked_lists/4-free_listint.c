#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head listint_list to be freed
 */
void free_list(listint_t*head)
{
	listint_t*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
