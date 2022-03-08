#include "dog.h"
/**
 * init_dog - initialize data
 * @d: i a pointer
 * @name: name dog
 * @age: age dog
 * @owner: owner dog|:w
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = "Poppy";
	(*d).age = 3.5;
	(*d).owner = "Bob";
}
