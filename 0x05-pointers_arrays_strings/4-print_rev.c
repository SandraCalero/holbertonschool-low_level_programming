#include "holberton.h"

/**
 * print_rev -   prints a string, in reverse
 *
 * @s: a pointer to a string we want to print
 * Return: Nothing
 */
void print_rev(char *s)
{
	int size, c;

	for (size = 0 ; size[s] != '\0' ; size++)
		;
	for (c = size - 1 ; c[s] > 0 ; c--)
	{
		_putchar(c[s]);
	}
	_putchar('\n');
}
