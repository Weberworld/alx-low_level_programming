#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the value of a dog struct element
 * @d: The dog struct
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("Age: (nil)\n");
		else
			printf("Age: %s\n", d->age);
		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
