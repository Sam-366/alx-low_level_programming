#include "main.h"

/**
  * get_bit - function that returns the value of an index
  * @n: number
  * @index: number to retrieve
  * Return: value of index or -1 if error
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 98)
		return (-1);

	num = (n >> index) & 1;

	return (num);
}
