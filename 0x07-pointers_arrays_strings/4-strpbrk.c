#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: a pointer to a string
 * @accept: a pointer to a string
 * Return:  a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (s + 1);
}
