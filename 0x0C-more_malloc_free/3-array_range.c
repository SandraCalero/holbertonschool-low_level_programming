#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 *
 * @min: minimum number in the array
 * @max: maximum number in the array
 * Return: NULL if min is greater than max 0 or if it fails. success a pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max + 1) - min));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i <= (max - (min - i)) ; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
