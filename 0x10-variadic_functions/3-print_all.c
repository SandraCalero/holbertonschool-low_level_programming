#include "variadic_functions.h"
/**
 *printchar - prints a char
 *@arg: argument of the list
 */
void printchar(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 *printint - prints a char
 *@arg: - argument of the list
 */
void printint(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 *printfloat - prints a char
 *@arg: - argument of the list
 */
void printfloat(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 *printstr - prints a char
 *@arg: - argument of the list
 *Return: Nothing
 */
void printstr(va_list arg)
{
	char *p;

	p = va_arg(arg, char*);
	if (p == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	td array_data[] = {
		{"c",  printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstr},
		{NULL, NULL}
	};
	va_list list;
	char *separator = "";
	void (*fun_ptr)(va_list);
	int i, j;

	va_start(list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(array_data[j].c))
			{
				printf("%s", separator);
				fun_ptr = array_data[j].f;
				fun_ptr(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
