#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array
 * @size: array size
 * @c: char
 * Return: NULL is failure, otherwise pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;

	char *array = malloc(sizeof(char) * size);

	if (size == 0 && array == 0)

		return (NULL);

	for (n = 0; n < size; n++)

		array[n] = c;

	return (array);
}
