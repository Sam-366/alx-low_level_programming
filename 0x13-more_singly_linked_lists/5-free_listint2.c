#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: points to head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (head == NULL)
		return;

	node = *head;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}

	*head = NULL;
}
