#include "main.h"
/**
 * swap_int - swaps the values of two integer
 * @a: first integer
 * @b: second integer
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
