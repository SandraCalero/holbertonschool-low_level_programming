#include "holberton.h"
/**
 * print_most_numbers - Prints the numbers, from 0 to 9, Do not print 2 and 4
 *
 * Return: No exist.
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
{
	if (c != '2' && c != '4')
	_putchar(c);
}
	_putchar('\n');
}
