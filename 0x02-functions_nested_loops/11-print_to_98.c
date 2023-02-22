#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n: input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)

{
	int c;

	if (n > 98)
		for (c = n; c > 98; --c)
			printf("%d, ", c);
	else
		for (c = n; c < 98; ++c)
			printf("%d, ", c);
	printf("98\n");
}
