#include "main.h"
/**
 * _strpbrk - searches for a string
 * @s: string
 * @accept: string
 * Return: Always 0
 * Bytes in accept, returns NULL if byte is not found
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
		for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}

