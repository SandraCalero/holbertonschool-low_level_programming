#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - eturns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: pointer to a string
 * Return:  NULL if size = 0 or a pointer to the array, or NULL if it fails
 */

char *_strdup(char *str)
{
	int i;
	int size;
	char *s;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
