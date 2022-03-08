#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("%s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		if ((*d).age != 0)
			printf("%f\n", (*d).age);
		else
			printf("nil\n");
		if ((*d).owner != NULL)
			printf("%s\n", (*d).owner);
		else
			printf("nil\n");
	}
}
