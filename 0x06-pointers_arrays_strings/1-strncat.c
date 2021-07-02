#include "holberton.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: a pointer destiny of src
 * @src: a pointer a string
 * @n: bytes from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0 ; dest[dest_len] != '\0' ; dest_len++)
		;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
