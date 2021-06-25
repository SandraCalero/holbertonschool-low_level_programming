#include<stdio.h>
/**
 * main - Prints the numbers from 1 to 100, FizzBuzz.
 *
 * Return: 0 Always
 */
int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if (num == 100)
		{
			printf("Buzz\n");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num < 100)
		{
			printf("%d ", num);
		}

	}
	return (0);
}
