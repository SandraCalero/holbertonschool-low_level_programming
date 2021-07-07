#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @s: a pointer to a string we want to print
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
