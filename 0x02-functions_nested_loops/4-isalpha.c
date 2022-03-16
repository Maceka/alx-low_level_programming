#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: parameter that accepts the int argument
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
