#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The number  first printed number
 *
 * Return: Not exist
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		printf("%d, ", n);
		}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("%d", n);
	printf("\n");
}
