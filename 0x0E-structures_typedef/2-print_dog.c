#include "main.h"
#include <stdlib>
/**
 * print_dog - print 'struct dog'
 * @d: struct dog
 *
 * Return: if element of d is NULL print nil instead of the element, if d is null print nothing.
 */  
void print_dog(struct dog *d)
{
if (d == 0)
	return;
if (d->name == 0)
	printf("Name: (nil)\n");
else
	printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == 0)
	printf("Owner:(nil)\n");
else
	printf("Owner: %s\n", d->owner);
}

