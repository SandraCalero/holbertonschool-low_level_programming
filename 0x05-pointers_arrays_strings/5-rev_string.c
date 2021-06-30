#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: a pointer to a string we want to print
 * Return: Nothing
 */
void rev_string(char *s)
{
	char c;
	int size, i;

	for (size = 0 ; size[s] != '\0' ; size++)
		;
	size = size - 1;
	for (i = 0 ; i <= (size / 2) ; i++)
	{
		c = s[i];
		s[i] = s[size - i];
		s[size - i] = c;
	}
}
