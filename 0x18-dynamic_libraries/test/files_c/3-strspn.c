#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: a pointer to a string
 * @accept: a pointer to a string
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int num;

	i = 0;
	num = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0' && s[i] != accept[j] ; j++)
			;
		if (accept[j] == '\0')
		{
			return (num);
		}
			num++;
			i++;
	}
	return (num);
}
