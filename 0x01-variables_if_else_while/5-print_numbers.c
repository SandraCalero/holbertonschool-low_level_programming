#include <stdio.h>
/**
 * main - Prints  all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
int num = 0;
while (num <= 9)
{
printf("%d", num);
num++;
}
putchar('\n');
return (0);
}
