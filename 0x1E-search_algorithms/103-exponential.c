#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

/**
 * exponential_search - searches for a value in array
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: index of first encounter
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, j, mid, start, end;
	int piv;

	if (!array)
		return (-1);
	if (value == array[0])
		return (0);
	for (i = 1; i < size && array[i] <= value; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i - 1);
	start = i / 2;
	end = i;
	if (i >= size)
		end = size - 1;
	while (end >= start)
	{
		printf("Searching in array: ");
		for (j = start; j < end; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		mid = (start + end) / 2;
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
