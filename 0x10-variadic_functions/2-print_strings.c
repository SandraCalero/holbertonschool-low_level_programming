#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - prints strings
 *
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int i;
	char *str;

	va_start(s, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(s, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(s);
	printf("\n");
}
