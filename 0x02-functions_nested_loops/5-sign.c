#include "main.h"

/**
 * print_sign - prints the sign of a numbe
 * @n: the sign of a number to be printed
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
