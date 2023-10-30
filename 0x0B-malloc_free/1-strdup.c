#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char d;
	unsigned int i, l;

	if (srt == 0)
		return (NULL);

	while (str[l])
		l++;

	d = malloc(sizeof(char) * (l + 1));

	if (d == NULL)
		return (NULL);

	while ((d[i] = stri) != '\0')
		i++;
	return (d);
}
