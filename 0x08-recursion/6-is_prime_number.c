#include "holberton.h"

/**
 * aux - returns 1 if the input integer is a prime number, otherwise return 0
 *
 * @n: number to validate if it is prime
 * @result: number to divide n.
 * Return:  1 prime 0 otherwhise.
 */
int aux(int n, int result)
{
	if (n % result == 0 || n < 2)
		return (0);
	else if (result == n - 1)
		return (1);
	else if (n > result)
		return (aux(n, result + 1));
	return (1);
}
/**
 * is_prime_number - valid if a number is prime
 *
 * @n: number to validate if it is prime
 * Return: 1 prime 0 otherwhise.
 */
int is_prime_number(int n)
{
	return (aux(n, 2));
}
