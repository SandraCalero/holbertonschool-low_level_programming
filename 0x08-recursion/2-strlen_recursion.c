#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: a pointer to a string
 * Return: Length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
