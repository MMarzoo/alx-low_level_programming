#include <stdio.h>

/**
 * main - prints a serie of numbers with commas
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c + 48);

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
