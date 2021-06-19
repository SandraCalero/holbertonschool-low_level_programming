#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
int Hexa;
for (Hexa = 48; Hexa <= 57; Hexa++)
putchar(Hexa);
for (Hexa = 97; Hexa <= 102; Hexa++)
putchar(Hexa);
putchar('\n');
return (0);
}
