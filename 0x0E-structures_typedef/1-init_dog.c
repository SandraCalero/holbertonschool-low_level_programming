#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: minimum number in the array
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 * Return: a pointer to a data structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
