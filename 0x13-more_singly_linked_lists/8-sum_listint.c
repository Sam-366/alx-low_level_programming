#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data in a linked list
 * @head: first node in the linked list
 *
 * Return: sum of all data else 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}

