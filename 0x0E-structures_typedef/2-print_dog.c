#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 *
 * @d: pointer to struct dog
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);
		if (d->age == NAN)
			printf("Age: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
}
