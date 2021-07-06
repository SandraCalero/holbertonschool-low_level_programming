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
	int i = 0;
	int j = 0;
	int rest = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			rest = 0;
			while (rest == 0 && (haystack[i] != '\0' ||
					     needle[j] != '\0'))
			{
				i++;
				j++;
				rest = haystack[i] - needle[j];
			}
			if (rest == 0)
				return (haystack);
		}
		else if (*(haystack + 1) == *needle)
		{
			while (rest == 0 && (haystack[i] != '\0' ||
					     needle[j] != '\0'))
			{
				i++;
				j++;
				rest = haystack[i] - needle[j];
			}
			if (rest == 0)
				return (haystack + 1);
		}
		haystack++;
	}
	return (0);
}
