#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 * Return: pointer allocate space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
	n = b;
	c = a + n;
	ptr = malloc(c + 1);

	if (ptr == NULL)
		return (NULL);
	for (d = 0; d < c; d++)

		if (d < a)
		ptr[d] = s1[d];
		else
		ptr[d] = s2[d - a];
	ptr[c] = '\0';
	return (ptr);
}
