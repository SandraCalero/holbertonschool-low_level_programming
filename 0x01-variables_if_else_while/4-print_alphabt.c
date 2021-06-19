#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase except q and e
 *
 * Return: Always 0
 */
int main(void)
{
int let;
for (let = 97; let <= 122; let++)
if (let != 101 && let != 113)
putchar(let);
putchar('\n');
return (0);
}
