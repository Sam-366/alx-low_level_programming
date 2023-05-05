#include "main.h"

/**
  * binary_to_uint - function that converts a binary number to unsigned int
  *
  * @b: points to binary number
  *
  *
  * Return: converted number, 0 if b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = 2 * num + (b[i] - '0');
	}

		return (num);
}
