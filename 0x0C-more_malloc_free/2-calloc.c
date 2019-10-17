#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* _calloc - check the code for Holberton School students.
* @nmemb: qsdqsdq
* @size: qsdqsdq
* Return: Always 0.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *r;
unsigned int i;
if (nmemb <= 0 || size <= 0)
return (NULL);
r = malloc(size * nmemb);
if (r == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
r[i] = 0;
return (r);
}
