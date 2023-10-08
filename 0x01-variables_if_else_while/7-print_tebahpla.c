#include <stdio.h>

/**
  * main - Prints the alphabet at reverse
  *
  * Return: Always (Success)
  */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
