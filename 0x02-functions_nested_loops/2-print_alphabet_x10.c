#include "holberton.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 * Return: No exist.
 */
void print_alphabet_x10(void)
{
char c;
int times;
	for (times = 1; times <= 10; times++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
