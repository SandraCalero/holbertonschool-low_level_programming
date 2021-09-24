#include "holberton.h"

/**
 *  _puts - prints a string
 *
 * @str: a pointer to a string we want to print
 * Return: Nothing
 */
void _puts(char *str)
{
	int c;

	for (c = 0 ; c[str] != '\0' ; c++)
	{
		_putchar(c[str]);
	}
	_putchar('\n');
}
