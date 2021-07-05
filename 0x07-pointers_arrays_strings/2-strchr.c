#include "holberton.h"

/**
 * _strchr -  locates a character in a string.
 *
 * @s: a pointer to a string
 * @c: character
 * Return: the pointer to dest
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
