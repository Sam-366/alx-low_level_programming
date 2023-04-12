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
	char *array = malloc(size);

	if (size == 0 && array == 0)
		return (NULL);

	while (size--)
		array[size] = c;

	return (array);
}
