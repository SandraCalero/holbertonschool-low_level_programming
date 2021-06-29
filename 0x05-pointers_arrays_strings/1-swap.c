#include "holberton.h"

/**
 * swap_int -   swaps the values of two integers.
 *
 * @a: a pointer to an int we want to swap with b
 * @b: a pointer to an int we want to swap with a
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
