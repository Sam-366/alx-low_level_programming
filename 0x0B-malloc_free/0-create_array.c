#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -function to create an array
 * @size: array size
 * @c: char
 * Return: NULL is fail, otherwise pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str;

	str = malloc(size * sizeof(char));

	if (size == 0 && str == NULL)

		return (NULL);

	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);
}
