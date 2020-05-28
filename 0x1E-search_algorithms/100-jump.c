#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in array
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: index of first encounter
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j;
	size_t jump = sqrt(size);
	int r = -1;

	if (!array)
		return (r);
	for (i = 0; i < size; i = i + jump)
	{
		if (value <= array[i])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
			j = i - jump;
			for (; j <= i; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (value == array[j])
				{
					r = j;
					break;
				}
			}
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (r);
}
