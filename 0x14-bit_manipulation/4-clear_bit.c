#include "main.h"

/**
  * clear_bit - function that sets bit value to 0
  * @n: points to number
  * @index: index
  * Return: return 1 if true, -1 if false
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 98)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n = *n ^ i;

	return (1);
}

