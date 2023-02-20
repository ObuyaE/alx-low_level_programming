#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from zero
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
