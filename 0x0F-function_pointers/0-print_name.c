#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - function to print name
 * @name: string
 * @f: pointer
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 || f != 0)

		return;
	f(name);
}
