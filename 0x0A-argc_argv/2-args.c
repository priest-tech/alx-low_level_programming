#include <stdio.h>
/**
 * main - print all arguments passed to it
 * @argc: counts number of arguments passed.
 * @argv: an array of pointers to the array.
 *
 * Return: 0.
 */
int main(int argc, char _attribute_((_unused_)) *argv[])
{
	printf("%s\n", argv[]);

	return (0);
}
