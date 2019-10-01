#include <unistd.h>
#include "holberton.h"
/**
 * swap_int - swaps two int
 * @a: int to swap
 * @b: int to swap
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
