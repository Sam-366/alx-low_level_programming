#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node at a specified index
 * @head: points to head
 * @index: node to return
 *
 * Return: to node or NULL if false
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}
	return (temp ? temp : NULL);
}

