#include <stdio.h>

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
int main() 
{
	dog my_dog;

	my_dog.*name;
	my_dog.age;
	my_dog.*owner;
}
