#include "main.h"

/**
  * flip_bits - function that returns the number of bits
  * @n: initial number
  * @m: second number
  * Return: bit count
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int initial;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		initial = exclusive >> i;
		if (initial & 1)
			count++;
	}

	return (count);
}

