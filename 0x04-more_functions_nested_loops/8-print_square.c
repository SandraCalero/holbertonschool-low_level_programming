#include "holberton.h"
/**
 * print_square - Prints a square
 * @size:  is the size of the square
 *
 * Return: No exist.
 */
void print_square(int size)
{
	int fil;
	int col;

	if (size > 0)
	{
		for (fil = 0 ; fil < size ; fil++)
		{
			for (col = 0 ; col < size ; col++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
