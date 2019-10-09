#include "holberton.h"
#include <stdio.h>

/**
* _pow_recursion - fills memory with a constant byte.
* @n: the memory area to print in
* Return: void.
*/

int is_prime_number(int n)
{
  int i = n;
  if (i==1)
      {
          return 1;
      }
      else if(n %i==0)
      {
           return 0;
      }
      else
         {
           i = i -1;
           is_prime_number(n);
         }
}
