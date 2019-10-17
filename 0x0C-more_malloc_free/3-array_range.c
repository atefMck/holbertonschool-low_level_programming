#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* array_range - check the code for Holberton School students.
* @min: qsdqsdq
* @max: qsdqsdq
* Return: Always 0.
*/

int *array_range(int min, int max)
{
int *r;

if (min > max)
return (NULL);
r = malloc(sizeof(int) * (max - min));
if (r == NULL)
return (NULL);
for (; min <= max; min++)
r[min] = min;
return (r);
}
