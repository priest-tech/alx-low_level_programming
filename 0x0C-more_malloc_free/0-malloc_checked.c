#include "main.h"
/**
 * malloc_checked  - allocate memory
 * @b: unsgined int memory to allocate
 * Return: void pointer to malloc memory space
 */
void *malloc_checked(unsigned int b);
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
