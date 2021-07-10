#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings.
 * Return:  0 success.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
