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
	int i, j;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += atoi(argv[i]);
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
