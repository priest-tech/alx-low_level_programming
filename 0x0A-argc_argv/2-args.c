#include <stdio.h>
/**
 * main - print all arguments passed to it
 * @argc: counts number of arguments passed.
 * @argv: an array of pointers to the array.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
