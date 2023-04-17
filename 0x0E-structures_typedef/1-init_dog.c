#include "dog.h"
/**
* init_dog - fun
* @d: pointer
* @name: value
* @age: value
* @owner: value
*
* Return: non
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
