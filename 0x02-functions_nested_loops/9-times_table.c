#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Not exist
 */
void times_table(void)
	{
int times;
int num;
int table;
for (times = 0; times <= 9; times++)
{
for (num = 0; num <= 9; num++)
{
table = times * num;
if (table > 9)
{
_putchar ((table / 10) + '0');
_putchar ((table % 10) + '0');
}
else
{
_putchar((table)+'0');
}
if (num < 9)
{
_putchar (',');
_putchar (' ');
if (((num + 1) * times) <= 9)
_putchar (' ');
}
}
_putchar('\n');
}
}
