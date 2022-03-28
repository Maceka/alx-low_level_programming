#include "main.h"

/**
 * _memcpy - copies memory address
 * @dest: destination variable to paste
 * @src: source file to copy from
 * @n: memory byte to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
