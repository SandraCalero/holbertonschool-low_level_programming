#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: The number for which the last digit is to be calculated
 *
 * Return: The last digit of a number
 */
int print_last_digit(int num)
{
	if (num < 0)
		num = num * -1;
	_putchar((num % 10) + '0');
	return (num % 10);
}
