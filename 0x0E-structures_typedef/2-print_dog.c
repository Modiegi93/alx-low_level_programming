#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: dog's information
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
		{
			printf("Name: Nil\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (!(d->owner))
		{
			printf("Owner: \n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
