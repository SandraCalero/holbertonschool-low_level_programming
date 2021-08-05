#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer that is pointing to a string of 0 and 1 chars.
 *
 * Return: The converted number. 0 if there is one or more chars in
 * the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int len_b;
	int position_b;
	unsigned int uint = 0;
	unsigned int multwo = 1;
	unsigned int value_b;

	if (b == NULL)
		return (0);
	for (len_b = 0 ; b[len_b] != '\0' ; len_b++)
	{
		if (b[len_b] != '0' && b[len_b] != '1')
		{
			return (0);
		}
	}
	for (position_b = (len_b - 1) ; b[position_b] != '\0' ||
		     position_b >= 0; position_b--, multwo = 2 * multwo)
	{
		value_b = (unsigned int) b[position_b] - '0';
		uint = multwo * value_b + uint;
	}
	return (uint);
}
