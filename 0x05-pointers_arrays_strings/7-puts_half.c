#include "holberton.h"

/**
 * puts_half - prints half of a string
 *
 * @str: a pointer to a string we want to print
 * Return: Nothing
 */
void puts_half(char *str)
{
	int c, size;

	for (size = 0 ; str[size] != '\0'; size++)
		;
	for (c = ((size + 1) / 2) ; str[c] != '\0' ; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
