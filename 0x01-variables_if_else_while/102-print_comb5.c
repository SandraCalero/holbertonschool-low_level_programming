#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 *Return: Always 0
 */
int main(void)
{
int num1, num2, num3, num4;
for (num1 = 48; num1 <= 57; num1++)
{
for (num2 = 48; num2 <= 56; num2++)
{
if ((num1 == 48 && num2 == 48) || num1 > 48)
{
for (num3 = 48; num3 <= 57; num3++)
{
for (num4 = 49; num4 <= 57; num4++)
if (num1 >= num2 && num1 <= num3 && num2 <= num3 && num2 < num4)
{
putchar(num1);
putchar(num2);
putchar(' ');
putchar(num3);
putchar(num4);
if ((num1 < 57 && num2 <= 56) || (num1 == 57 && num2 < 56))
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
