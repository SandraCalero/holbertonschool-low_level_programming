#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: a pointer to a string
 * Return: a string
 */
char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	if (s[i] >= 97 && s[i] <= 122 && ((s[i - 1] >= 32 && s[i - 1] <= 34) ||
	   (s[i - 1] >= 40 && s[i - 1] <= 41) ||
	   (s[i - 1] == 44) ||
	   (s[i - 1] == 46) ||
	   (s[i - 1] >= 59 && s[i - 1] <= 63) ||
	   (s[i - 1] >= 123 && s[i - 1] <= 125) ||
	   (s[i - 1] == '\t' || s[i - 1] == '\n')))
	{
		s[i] = s[i] - 32;
	}
	else
	{
		s[i] = s[i];
	}
	i++;
}
return (s);
}
