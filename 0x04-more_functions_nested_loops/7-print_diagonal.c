#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal in the terminal
 * @n: number of times the character is printed
 *
 * Return: No exist.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < a; b++)
			{
				if (a > b)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
