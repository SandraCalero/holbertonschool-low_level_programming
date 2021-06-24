#include "holberton.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times the character is printed
 *
 * Return: No exist.
 */
void print_line(int n)
{
	int times;

	if (n > 0)
	{
		for (times = 0 ; times < n ; times++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
