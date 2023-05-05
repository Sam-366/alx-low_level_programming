#include "main.h"

/**
  * set_bit - function that sets value of bit to 1
  * @n: points to number
  * @index: index of bit
  * Return: 1 if success, -1 is fail
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 98)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
