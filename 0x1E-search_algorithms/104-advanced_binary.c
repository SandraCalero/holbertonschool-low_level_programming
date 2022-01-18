#include "search_algos.h"

/**
 * print_array - prints the array being searched every time it changes
 * @array: Pointer to a pointer to the first element of the array to search in
 * @left: First number at the left where the array starts printing
 * @right: Last number at the left where the array finishes printing
 */

void print_array(int *array, int left, int right)
{
	int i;

	for (i = left ; i < right ; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the advance binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: Index where value is located. -1 If value is not present in
 * array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i;

	if (array != NULL)
		while (left <= right)
		{
			printf("Searching in array: ");
			print_array(array, left, right);
			i = (left + right) / 2;
			if (array[i] < value)
				left = i + 1;
			else if (array[i] > value)
				right = i - 1;
			else
			{
				if (array[i - 1] == value)
					right = i;
				else
					return (i);
			}
		}
	return (-1);
}
