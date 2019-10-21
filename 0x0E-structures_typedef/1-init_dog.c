#include "dog.h"
/**
 * init_dog - intitialize a dog information.
 * @d: variable.
 * @name: its name.
 * @age: its age.
 * @owner: its owner.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
