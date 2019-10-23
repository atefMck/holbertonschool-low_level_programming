#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - execute func on each elem
  * @array: the array
  * @size: array size
  * @cmp: the func to exec
  * Return: void.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int v;

if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);

if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
v = (*cmp)(array[i]);
if (v == 1)
return (i);
}
return (-1);
}
