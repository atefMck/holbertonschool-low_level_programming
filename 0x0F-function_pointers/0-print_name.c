#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - print a name
  * @name: the name
  * @f: function
  * Return: void.
  */

void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return (NULL);
(*f)(name);
}
