#include "holberton.h"

/**
 *  _puts_recursion - prints a string
 *
 * @s: a pointer to a string we want to print
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(*s);
	s++;
	_puts_recursion(s);
}
