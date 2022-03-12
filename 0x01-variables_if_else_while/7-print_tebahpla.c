#include <stdio.h>

/**
 * main - this main function prints the lowercase in reverse
 * using putchar() function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
