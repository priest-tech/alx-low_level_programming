#include <stdlib.h>
#include <time.h>
#include <stdlib>

/**
 * main - Prints out numbers that are negative, positive, or zero.
 *
 * Return: Always 0
 */ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d the number is positive\n", n)
	else if (n < 0)
	printf("%d the number is negative\n", n)
	else
	printf("%d the number is zero\n", n) 	
	return (0);
}
