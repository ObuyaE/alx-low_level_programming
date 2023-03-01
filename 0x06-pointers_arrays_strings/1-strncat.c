#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int j;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[x] = src[j];
	x++;
	j++;
	}
	dest[x] = '\0';
	return (dest);
}
