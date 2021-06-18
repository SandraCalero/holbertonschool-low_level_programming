#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
int let = 97;
while (let <= 122)
{
putchar(let);
let++;
}
putchar('\n');
return (0);
}
