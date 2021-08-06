#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: Number to be changed.
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int bit, flag;

	if (n == 0)
		_putchar('0');
	else
	{
		flag = 0;
		for (bit = sizeof(n) * 8 - 1 ; bit >= 0 ; bit--)
		{
			if (((n >> bit) & 1) == 1)
				flag = 1;
			if (flag == 1)
			{
				if (((n >> bit) & 1) == 1)
				{
					_putchar('1');
				}
				else
					_putchar('0');
			}
		}
	}
}
