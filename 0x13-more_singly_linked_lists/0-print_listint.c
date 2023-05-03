#include "lists.h"

/**
 * print_listint - function that prints all elements of a list
 * @h: pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next, num++)
		printf("%d\n", h->n);

	return (num);
}
