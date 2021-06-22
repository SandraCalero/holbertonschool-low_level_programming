#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: The number to print
 *
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero and -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
	return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar ('+');
	return (1);
	}
}
