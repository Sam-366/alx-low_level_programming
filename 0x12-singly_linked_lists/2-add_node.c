#include "lists.h"

/**
  * add_node - function that adds new node
  * @head: points to head of list
  * @str: the string
  * Return: new node, NULL if fail
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *next_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	next_node = malloc(sizeof(list_t));
	if (next_node == NULL)
	{
		return (NULL);
	}
	next_node->str = strdup(str);
	if (next_node->str == NULL)
	{
		free(next_node);
		return (NULL);
	}

	next_node->len = strlen(str);
	next_node->next = *head;
	*head = next_node;

	return (next_node);
}
