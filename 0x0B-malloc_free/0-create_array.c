#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 *
 * @size: size of a string
 * @c: specific character to initializes the string
 * Return:  NULL if size = 0 or a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size > 0)
	{
		s = malloc((size) * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
	}
	else
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
