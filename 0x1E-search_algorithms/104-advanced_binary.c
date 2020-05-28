#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * rec_binary - searches for a value in array
 * @array: input array
 * @start: starting index of the array
 * @end: ending index of the array
 * @value: value to search
 * Return: index of first encounter
 */
int rec_binary(int *array, size_t start, size_t end, int value)
{
	size_t mid;
	size_t i;

	if (end <= start)
		return (-1);
	printf("Searching in array: ");
	for (i = start; i < end - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	mid = (start + end) / 2;
	if (value == array[mid] && array[mid - 1] != value)
		return (mid);
	else if (array[mid] > value)
		return (rec_binary(array, start, mid, value));
	else if (array[mid] < value)
		return (rec_binary(array, mid + 1, end, value));
	else
		return (rec_binary(array, start, mid, value));
	return (-1);
}

/**
 * advanced_binary - searches for a value in array
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: index of first encounter
 */
int advanced_binary(int *array, size_t size, int value)
{
		if (!array)
			return (-1);
		return (rec_binary(array, 0, size, value));
}
