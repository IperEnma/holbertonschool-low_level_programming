#ifndef _DOG
#define _DOG
/**
 * struct dog - simulator dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Description: stores characteristics of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
