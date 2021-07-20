#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy -  copies the string pointed to by src
 *
 * @dest: a pointer destiny of src
 * @src: a pointer a string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
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
	int sizeName, sizeOwner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	for (sizeName = 0 ; name[sizeName] != '\0' ; sizeName++)
		;
	for (sizeOwner = 0 ; owner[sizeOwner] != '\0' ; sizeOwner++)
		;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeName * sizeof(d->name));
	if (d == NULL)
		return (NULL);
	d->name = _strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(sizeOwner * sizeof(d->owner));
	if (d == NULL)
		return (NULL);
	d->owner = _strcpy(d->owner, owner);
	return (d);
}
