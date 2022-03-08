#include "dog.h"
/**
 * init_dog - initialize data
 * @d: is a pointer
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
