#include "main.h"

/**
 * swap_int - a function that swaps two integers in the parameter
 * @a: accepts the first parameter, that's to be swapped, as integer
 * @b: accepts the second parameter, that's to be swapped, as integer
 * Return: Void (Success);
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
