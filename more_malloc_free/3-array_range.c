#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max inclusive
 * @min: starting integer value (inclusive)
 * @max: ending integer value (inclusive)
 *
 * Return: pointer to newly allocated array, or NULL if min > max or on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int count, i;

	if (min > max)
		return (NULL);

	count = max - min + 1;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		arr[i] = min + i;

	return (arr);
}
