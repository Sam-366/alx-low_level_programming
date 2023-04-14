#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = (int *) malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		ptr[j] = min++;

	return (ptr);
}
