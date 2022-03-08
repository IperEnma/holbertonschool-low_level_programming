#include "dog.h"
/**
 *
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = "Poppy";
	(*d).age = 3.5;
	(*d).owner = "Bob";
}
