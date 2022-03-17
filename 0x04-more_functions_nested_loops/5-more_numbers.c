#include "main.h"

/**
 * more_numbers - prints a string of numbers 1 - 14
 *
 * Return: void (Success)
 */
void more_numbers(void)
{
	char num[] = "01234567891011121314";
	int loop, i;

	for (i = 48; i <= 57; i++)
	{
		for (loop = 0; loop <= 20; loop++)
		{
			_putchar(num[loop]);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
