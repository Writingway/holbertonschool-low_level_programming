#ifndef _DOG_
#define _DOG_

/**
 * struct dog - struct
 *@name : name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 * Return: Always 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
