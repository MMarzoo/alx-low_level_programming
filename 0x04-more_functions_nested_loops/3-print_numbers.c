#include "main.h"

/**
 * print_number - print 0 - 9 only using putchar twice
 *
 * Return: Always 0 (success)
 */
void print_number(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
