#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - gets the number of bits you would need to flip to
 * get from one number to another.
 * @n: First number to be compared.
 * @m: Secon number to be compared.
 *
 * Return: Nothing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit;
	int count = 0;

	for (bit = sizeof(n) * 8 - 1 ; bit >= 0 ; bit--)
	{
		if ((((n ^ m) >> bit) & 1) == 1)
			count++;
	}
	return (count);
}
