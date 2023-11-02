#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatentes two strings
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string
 * @n: Number of bytes from n2 to concatente.
 *
 * Return: pointer to space in memory containing concatented string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s[len1] != '\0'; len1++)
		;
	for (len2 = 0; s[len2] != '\0'; len2++)
		;
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] != '\0';
	return (s);
}
