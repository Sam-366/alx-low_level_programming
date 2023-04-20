#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - function that prints array
 * @array: array
 * @size: elements
 * @action: pointer to function
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	if (array && action)
	{
		k = 0; /* initialise k */

		while (k < size)
		{
			action(array[k]);
			k++;
		}
	return;
	}
}
