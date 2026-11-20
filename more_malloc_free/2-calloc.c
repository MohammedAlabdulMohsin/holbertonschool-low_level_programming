#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates zero-initialized memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated zeroed memory, or NULL on failure or 0 size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *bytes;
	unsigned int total, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	bytes = ptr;
	for (i = 0; i < total; i++)
		bytes[i] = 0;

	return (ptr);
}
