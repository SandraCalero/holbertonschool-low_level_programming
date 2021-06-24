#include "holberton.h"
/**
 * more_numbers -  Prints 10 times the numbers, from 0 to 14+
 *
 * Return: No exist.
 */
void more_numbers(void)
{
int num;
int times;
	for (times = 1; times <= 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
