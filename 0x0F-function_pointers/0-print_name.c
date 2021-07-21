#include "function_pointers.h"
#include <stdlib.h>
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
		return;
	f(name);
}