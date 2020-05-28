#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in array
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: index of first encounter
 */
int interpolation_search(int *array, size_t size, int value)
{
	int high = size - 1;
	int low = 0;
	int pos;
	int piv;

	if (!array)
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));
	while (high >= low && value >= array[low] && value <= array[high])
	{
		piv = array[pos];
		printf("Value checked array[%d] = [%d]\n", pos, piv);
		if (value == piv)
			return (pos);
		else if (piv > value)
			high = pos - 1;
		else if (piv < value)
			low = pos + 1;
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));
	}
	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
