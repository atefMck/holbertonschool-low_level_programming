#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in array
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: index of first encounter
 */
int binary_search(int *array, size_t size, int value)
{
	size_t end = size;
	size_t start = 0;
	size_t mid;
	size_t i;
	int piv;

	if (!array)
		return (-1);
	while (start < end)
	{
		printf("Searching in array: ");
		for (i = start; i < end - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (start + end - 1) / 2;
		piv = array[mid];
		if (value == piv)
			return (mid);
		else if (piv > value)
			end = mid;
		else if (piv < value)
			start = mid + 1;
	}
	return (-1);
}
