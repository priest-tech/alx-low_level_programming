#include "main.h"
#include <stdlib>
#include <stdio.h>
#include <limits.h>
/**
 * *malloc_checked - allocate memory
 *
 * Return: 98
 */
void *malloc_checked(unsigned int b);
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
