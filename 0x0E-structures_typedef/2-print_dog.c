#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Functiont that prints the dog structure
 * @d: dog
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
