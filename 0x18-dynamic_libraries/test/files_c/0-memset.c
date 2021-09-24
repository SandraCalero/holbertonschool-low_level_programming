#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: a pointer to a string
 * @b: contant that fill the bytes
 * @n: first bytes of the memory to fill
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
