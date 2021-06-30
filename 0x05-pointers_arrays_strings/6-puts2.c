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

	for (c = 0 ; c[str] != '\0' ; c = c + 2)
	{
		_putchar(c[str]);
	}
	_putchar('\n');
}
