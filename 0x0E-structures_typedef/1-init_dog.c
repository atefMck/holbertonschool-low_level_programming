#include "dog.h"
/**
 * init_dog - yes
 * @d: pointer to  dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner f the dog
 * Return void
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
