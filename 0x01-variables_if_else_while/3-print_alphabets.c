#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
int let;
for (let = 97; let <= 122; let++)
putchar(let);
for (let = 65; let <= 90; let++)
putchar(let);
putchar('\n');
return (0);
}
