#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
