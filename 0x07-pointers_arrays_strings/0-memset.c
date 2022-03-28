#include "main.h"

/**
 * _memset - replaces array element with char value
 * @s: accepts a pointer characer that holder the value of array
 * @b: accepts the value that will replace the array's value
 * @n: the number of bytes it should replace
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
