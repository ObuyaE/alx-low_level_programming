#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: pointed memory address
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
