#include "main.h"
/**
 * _memset - function that fills a memory block
 * @s: memory
 * @b: the constant
 * @n: number of byte
 * Return: The pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
