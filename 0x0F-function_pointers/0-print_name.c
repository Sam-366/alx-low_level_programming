#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function to print name
 * @name: string
 * @f: pointer
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)

		return;

	f(name);
}
