#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: a pointer to a string
 * Return: a string in uppercase
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 97)
		{
			s[c] = s[c] - 32;
		}
		else
		{
			s[c] = s[c];
		}
		c++;
	}
	return (s);
}
