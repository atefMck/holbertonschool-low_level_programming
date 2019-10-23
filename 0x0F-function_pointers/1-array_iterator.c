#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - execute func on each elem
  * @array: the array
  * @size: array size
  * @action: the func to exec
  * Return: void.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action == NULL)
return;
if (array == NULL)
return;

for (i = 0; i < size; i++)
(*action)(array[i]);
}
