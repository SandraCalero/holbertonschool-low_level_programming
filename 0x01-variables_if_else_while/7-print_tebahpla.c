#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0
 */
int main(void)
{
int let = 122;
while (let >= 97)
{
putchar(let);
let--;
}
putchar('\n');
return (0);
}
