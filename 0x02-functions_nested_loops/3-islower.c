#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase using the argument
 * @c: as a parameter. If it's lowercase print 1 if otherwise return 0
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
