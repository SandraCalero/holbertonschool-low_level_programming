#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: a pointer to an array of integers
 * @n: number of elements of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	n = n - 1;

	if (n >= 0)
	{
		while (i <= (n / 2))
		{
			j = a[i];
			a[i] = a[n - i];
			a[n - i] = j;
			i++;
		}
	}
}
