#include "holberton.h"

/**
 * rot13 -  encodes a string using rot13.
 *
 * @s: a pointer to a string
 * Return: a string
 */
char *rot13(char *s)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alphR[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;
	int j;
	int finLoop;

	for (i = 0 ; s[i] != 0 ; i++)
	{
		finLoop = 0;
		for (j = 0 ; alpha[j] != 0 && finLoop == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = alphR[j];
				finLoop = 1;
			}
		}
	}
	return (s);
}
