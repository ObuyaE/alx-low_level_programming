#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0, j = 0;
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;

	concat = malloc(i + j + 1);

	if (concat == 0)
	{
		return (0);
	}

	for (k = 0; k < i; k++)
	{
		*(concat + k) = *(s1 + k);
	}
	for (k = 0, l = i; k < j; l++, k++)
	{
		*(concat + l) = *(s2 + k);
	}
	*(concat + l) = '\0';
	return (concat);
}
