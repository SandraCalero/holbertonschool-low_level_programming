#include<stdio.h>
/**
 * main - Print size of types
 *
 * Return: Always 0
 */
int main(void)
{
char character;
int integer;
long longer;
double bigNumber;
float decimal;
printf("Size of a char: %zu byte(s)\n", sizeof(character));
printf("Size of an int: %zu byte(s)\n", sizeof(integer));
printf("Size of a long int: %zu byte(s)\n", sizeof(longer));
printf("Size of a long long int: %zu byte(s)\n", sizeof(bigNumber));
printf("Size of a float: %zu byte(s)\n", sizeof(decimal));
return (0);
}
