#include <stdio.h>

/**
 * main - print the number since 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		pitchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
