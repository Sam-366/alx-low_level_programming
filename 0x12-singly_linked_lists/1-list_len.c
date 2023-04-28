#include "lists.h"

/**
  * list_len - functions that returns the lenth of elements
  * @h: first node
  * Return: returns the number of elements
  */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
