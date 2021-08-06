#include "main.h"
#include <stdlib.h>

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: Number in base 10.
 * @index: The index, starting from 0 of the bit we want to get
 *
 * Return: The value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(n) - 1))
		return (-1);
	else
		return ((n >> index) & 1);
}
