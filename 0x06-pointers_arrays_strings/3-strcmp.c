#include "holberton.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: subtraction between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int rest = s1[i] - s2[j];

	while (rest == 0 && (s1[i] != '\0' || s2[j] != '\0'))
	{
		i++;
		j++;
		rest = s1[i] - s2[j];
	}
	return (rest);
}
