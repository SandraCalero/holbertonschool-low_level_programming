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

	for (c = 0 ; str[c] != '\0' ; c++)
	{
		if (c % 2 == 0)
		_putchar(str[c]);
	}
	_putchar('\n');
}
