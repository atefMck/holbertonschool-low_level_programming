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
int diff, i;
diff = max - min + 1;
if (min > max)
return (NULL);
r = malloc(sizeof(int) * diff);
if (r == NULL)
return (NULL);
for (i = 0; i < diff; i++)
{
r[i] = min;
min++;
}
return (r);
}
