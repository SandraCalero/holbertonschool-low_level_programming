#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 *Return: Always 0
*/
int main(void)
{
int num1, num2, num3, num4, sum1, sum2;
for (num1 = 48; num1 <= 57; num1++)
{
for (num2 = 48; num2 <= 57; num2++)
{
sum1 = num1 * 100 + num2;
for (num3 = 48; num3 <= 57; num3++)
{
for (num4 = 48; num4 <= 57; num4++)
{
sum2 = num3 * 100 + num4;
if (sum1 < sum2)
{
putchar(num1);
putchar(num2);
putchar(' ');
putchar(num3);
putchar(num4);
if (num2 == 56 && num1 == 57)
{
num4++;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
