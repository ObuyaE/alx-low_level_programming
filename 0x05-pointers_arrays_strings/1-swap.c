#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first inpu
 * @b: second input
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
