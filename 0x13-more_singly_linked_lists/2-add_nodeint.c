#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * @head: points to head
 * @n: new node
 *
 * Return: new node, or NULL if false
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
