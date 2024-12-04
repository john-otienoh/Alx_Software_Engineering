#include "dog.h"
/**
 * init_dog - A function that initializes a variable of type struct
 * @d: A struct dog
 * @name: Dog's name
 * @age: Dogs's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
