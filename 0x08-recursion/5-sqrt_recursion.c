#include "holberton.h"

/**
 * aux - auxiliar function to returns the natural square root of a number.
 *
 * @base: number that must be multiplied by itself
 * @result: number to which the square root is calculated
 * Return:  the natural square root of a number.
 */
int aux(int base, int result)
{
	if (base * base == result)
		return (base);
	else if (base * base > result)
		return (-1);
	return (aux(base + 1, result));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number to which the square root is calculated
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (aux(1, n));
}
