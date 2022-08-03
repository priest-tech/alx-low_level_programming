#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * return: 0
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typdef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);

#endif

