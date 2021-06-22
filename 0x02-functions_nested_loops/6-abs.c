#include "holberton.h"
/**
 *  _abs - computes the absolute value of an integer
 * @a: The number to print
 *
 * Return:  absolute value of a
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
