#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum of all parameters
 * @n: number of parameters
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;

	int sum = 0;

	va_list add;

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(add, int);
	}
	va_end(add);

	return (sum);
}

