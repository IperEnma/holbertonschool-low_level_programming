#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dogd
 * @d: pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);

}
