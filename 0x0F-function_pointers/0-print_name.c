#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: name of the person
 * @f: function called
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		exit(EXIT_SUCCESS);
	else
		f(name);
}
