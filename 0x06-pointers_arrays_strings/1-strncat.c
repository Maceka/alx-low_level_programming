#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: accepts a char value to be concatenated
 * @src: accepts another value that's to be concatenated
 * @n: accepts the amount of bytes
 * Return: Always character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
