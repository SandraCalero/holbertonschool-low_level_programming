#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 *
 *Return: Always 0
 */
int main(void)
{
int num1, num2, num3;
for (num1 = 48; num1 <= 55;num1++)
{
for (num2 = 49; num2 <= 56; num2++)
{
for (num3 = 50; num3 <= 57; num3++)
if(num1 < num2 && num2 < num3)
{
putchar(num1); 
putchar(num2);
putchar(num3);
if (num1 < 55)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
