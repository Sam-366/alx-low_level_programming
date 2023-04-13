#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - memory allocation
 * @b: bytes
 * Return: returns a pointer to allocated memory if not NULL
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (int *) malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}
