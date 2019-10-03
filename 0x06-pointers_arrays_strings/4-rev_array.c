#include <unistd.h>
#include "holberton.h"
/**
* reverse_array - copie n bytes of a string
* @a: The destination string
* @n: source string.
* Return: void.
*/
void reverse_array(int *a, int n)
{
  n--;
int i, aux;
for (i = n; i > n / 2; i--)
{
  aux = a[i];
  a[i] = a[n - i];
  a[n - i] = aux;
}
}
