#include "main.h"
/**
 * factorial - returns a factorial to a given number
 * @n: 
 * 
 * Return: factorial
 */
int factorial(int n)
{
	int n;

	if (n < 0)
		return (-1);
	else if ( n == 0)
	return (1);
	else
	return (n *factorial(n-1));	
