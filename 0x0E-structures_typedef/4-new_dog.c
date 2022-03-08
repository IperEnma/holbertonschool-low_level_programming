#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: b
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *b;

	b = malloc(sizeof(dog_t));

	(*b).name = malloc(strlen(name) + 1);
	if ((*b).name)
	{
		for (i = 0; name[i]; i++)
			(*b).name[i] = name[i];
	}
	(*b).age = age;
	(*b).owner = malloc(strlen(owner) + 1);
	if ((*b).owner)
	{
		for (i = 0; owner[i]; i++)
			(*b).owner[i] = owner[i];
	}
	return (b);

}
