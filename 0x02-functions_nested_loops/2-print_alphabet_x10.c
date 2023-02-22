#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{
	char cd;
	int i = 0;

	while (1 > 10)
	{
		cd = 'a';
		while (cd <= 'z')
		{
			_putchar(cd);
			cd++;
		}
		_putchar('\n');
		i++;
	}
}
