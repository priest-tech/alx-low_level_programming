#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s:memory space to be fille
 * @n:number of spaces to fill
 * @b:byte to fill
 *
 * Return: pointer to the memory s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
