#include "main.h"

/**
 * main - prints string "_putchar" using
 * my own header file and putchar() function prototype defined in it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
