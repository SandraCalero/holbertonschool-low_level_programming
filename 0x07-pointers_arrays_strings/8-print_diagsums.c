#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 *
 * @a: a pointer to an array
 * @size: size of the array
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumDiag1 = 0;
	int sumDiag2 = 0;

	for (i = 0; i < (size * size); i = (i + size + 1))
	{
		sumDiag1 = sumDiag1 + a[i];
		printf("%d, ", sumDiag1);
	}
	for (i = size - 1; i < (size * size - 1); i = (i + size - 1))
	{
		sumDiag2 = sumDiag2 + a[i];
		printf("%d\n", sumDiag2);
	}
}
