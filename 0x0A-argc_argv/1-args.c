#include <stdio.h>
#define UNUSED(argv) (void)(argv)

/**
 * main - prints its name
 *
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings.
 * Return:  0 success.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	UNUSED(argv);
	return (0);
}
