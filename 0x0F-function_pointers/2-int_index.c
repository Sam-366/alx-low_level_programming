#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - function that returns index of first element
 * @array: array
 * @size: size of array
 * cmp: function of comparison
 * Return: if no element is matching, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
