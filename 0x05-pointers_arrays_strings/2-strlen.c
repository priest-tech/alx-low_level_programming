#include "main.h"
/**
 * _strlen - give the leght of a string.
 *@s: character to check.
 *
 * Return: leghth of string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

