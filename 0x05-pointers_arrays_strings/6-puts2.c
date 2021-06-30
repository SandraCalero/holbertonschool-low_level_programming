#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: a pointer to a string we want to print
 * Return: Nothing
 */
void puts2(char *str)
{
	int c;

	for ( ; str[c] != '\0' ; c = c + 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
