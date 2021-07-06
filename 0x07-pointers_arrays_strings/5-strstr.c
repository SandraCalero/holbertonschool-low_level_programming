#include "holberton.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: a pointer to a string
 * @needle: substring in the string haystack
 * Return:  a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		else if (*(haystack + 1) == *needle)
			return (haystack + 1);
		haystack++;
	}
	return (0);
}
