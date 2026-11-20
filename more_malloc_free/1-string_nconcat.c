#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 with at most n bytes of s2
 * @s1: first string (treated as "" if NULL)
 * @s2: second string (treated as "" if NULL)
 * @n: maximum number of bytes to copy from s2
 *
 * Return: pointer to newly allocated null-terminated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, copy_len, i, j;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;

	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

	copy_len = (n >= len2) ? len2 : n;

	concat = malloc(sizeof(char) * (len1 + copy_len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < copy_len; j++)
		concat[i + j] = s2[j];

	concat[len1 + copy_len] = '\0';

	return (concat);
}
