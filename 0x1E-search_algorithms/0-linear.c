#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in array
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: index of first encounter
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    if (!array)
    return(-1);
    for (i = 0; i < size; i++)
    {
    	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    	if (value == array[i])
    		return(i);
    }
    return(-1);
}
