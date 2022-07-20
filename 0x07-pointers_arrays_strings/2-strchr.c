#include "main.h"
/**
 * *_memcpy - copies memory area
 *@dest: to  memory area.
 *@src: from memory area
 * @n: number of bytes
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char* char_dst = (char*) dst;
	char* char_src = (char*) src;

	for (int i = 0; i < n; i++) 
	{
		*char_dst++ = *char_src++;
	}

	return dst;
}

