#include "lists.h"

/**
  * print_list - function that prints elements
  * @h: first node on the list
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("%s %d\n", h->str, h->len);
		}
		i++
	}
	return (i);
}
