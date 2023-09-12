#include "dog.h"
#include <stdio.h>

/**
  * print_dog - writing a function that prints a struct dog
  * @d : an element of struct dog
  * Return: Always(success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		d->name =("nil");
	}
	else if (d->owner == NULL)
	{
		d->owner =("nil");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

