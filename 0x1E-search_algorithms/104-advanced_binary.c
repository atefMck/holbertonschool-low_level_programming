#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - searches for a value in array
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: index of first encounter
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t end = size;
	size_t start = 0;
	size_t mid;
	size_t i;

	if (!array)
		return (-1);
	while (start < end)
	{
		printf("Searching in array: ");
		for (i = start; i < end - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (start + end - 1) / 2;
		if (value == array[mid] && array[mid - 1] != value)
			return (mid);
		else if (array[mid] > value)
			end = mid;
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid;
	}
	return (-1);
}
