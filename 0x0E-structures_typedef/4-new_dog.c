#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 * Return: a pointer to a data structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int nlen, olen, i;

	for (nlen = 0 ; name[nlen] != '\0' ; nlen++)
		;
	for (olen = 0 ; owner[olen] != '\0' ; nlen++)
		;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(nlen * sizeof(d->name));
	if (d == NULL)
		return (NULL);
	for (i = 0 ; i < nlen ; i++)
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(olen * sizeof(d->owner));
	if (d == NULL)
		return (NULL);
	for (i = 0 ; i < olen ; i++)
		d->owner[i] = owner[i];
	return (d);
}
