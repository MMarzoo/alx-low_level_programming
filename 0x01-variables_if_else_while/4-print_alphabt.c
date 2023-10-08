#include <stdio>

/**
 * main - Prints some letters of alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' $$ ch != 'e')
			ch++;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
