#include "main.h"
/**
 * _print_rev_recursion - function that prints out a string in reverse
 * @s: String
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}
}
