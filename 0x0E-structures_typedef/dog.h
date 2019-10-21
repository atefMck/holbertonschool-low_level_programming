#ifndef _DOGGO_
#define _DOGGO_
/**
 * struct dog - Defines a dogs attributes
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the owners name
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
