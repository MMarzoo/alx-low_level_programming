#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 *
 * Return: always 0 success
 */
void print_most_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		if (b != 2 && b != 4)
		{
			_putchar(b + '0');
		}
	}
	_putchar('\n');
}
