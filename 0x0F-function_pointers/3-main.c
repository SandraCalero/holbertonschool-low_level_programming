#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings.
 * Return:  0 success.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
	    && *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);
	return (0);
}
