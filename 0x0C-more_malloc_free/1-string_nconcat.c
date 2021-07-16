#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n: bytes from s2
 * Return: a pointer shall point to a newly allocated space in memory,
 * or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int sizeS1;
	unsigned int sizeS2;
	unsigned int sizeTotal;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (sizeS1 = 0 ; s1[sizeS1] != '\0' ; sizeS1++)
		;
	for (sizeS2 = 0 ; sizeS2 < n && s2[sizeS2] != '\0' ; sizeS2++)
		;
	sizeTotal = sizeS1 + sizeS2;
	s = malloc(sizeof(char) * (sizeTotal + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < sizeTotal ; i++)
	{
		if (i < sizeS1)
			s[i] = s1[i];
		else
			s[i] = s2[i - sizeS1];
	}
	s[sizeTotal] = '\0';
	return (s);
}
