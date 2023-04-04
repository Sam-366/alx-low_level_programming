#include "main.h"
/**
 * _memcpy - this function copies memory
 * @src: memory copied here
 * @dest: memory stored here
 * @n: byte
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]
		n--;
	}
	return (dest);
}
