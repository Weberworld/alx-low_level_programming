#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog struct with values
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 * Return: A dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int x, y, z;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}
	/* Get the length of char in name and owner */
	for (x = 0; name[x] != '\0'; x++)
		;
	for (y = 0; owner[y] != '\0'; y++)
		;
	/* Allocate memory for the owner and name */
	new_dog->name = malloc((sizeof(char) * x) + 1);
	new_dog->owner = malloc((sizeof(char) * y) + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/* Store the value of name into new_dog->name */
	for (z = 0; z < x; z++)
		new_dog->name[z] = name[z];
	new_dog->name[z] = '\0';

	/* Store the value of age into new_dog->age */
	new_dog->age = age;

	/*  Store the value of owner into new-dog->owner */
	for (z = 0; z < y; z++)
		new_dog->owner[z] = owner[z];
	new_dog->owner[z] = '\0';

	return (new_dog);
}
