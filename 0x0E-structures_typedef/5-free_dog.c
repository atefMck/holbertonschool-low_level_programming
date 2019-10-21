#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - You're free doggo.
 * @d: the doggy
 * Return: Void.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return (NULL);
free(d->name);
free(d->owner);
free(d);
}
