#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - important informations about the dog.
 * @name: name of dog.
 * @age: age of the dog.
 * @owner: who is the owner of the dog.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
