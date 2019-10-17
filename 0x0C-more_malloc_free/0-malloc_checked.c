#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - check the code for Holberton School students.
* @b: qsdqsdq
* Return: Always 0.
*/

void *malloc_checked(unsigned int b)
{
int *r;
r = malloc(b);
if (r == NULL)
{
exit(98);
}
return (r);
}
