#include "holberton.h"
/**
 * print_triangle - Prints a triangle
 * @size:  is the size of the square
 *
 * Return: No exist.
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (b = size ; b >= 1 ; b--)
			{
				if (a < b)
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
