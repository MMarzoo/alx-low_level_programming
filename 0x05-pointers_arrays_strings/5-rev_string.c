#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int a, b;
	char c;

	for (a = 0; s[a] != '\0'; ++a)
		;

	for (b = 0; b < a / 2; b++)
	{
		c = s[a];
		s[a] = s[a - 1 - b];
		s[a - 1 - b] = c;
	}
}
