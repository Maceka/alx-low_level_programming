#include <stdio.h>

/**
 * main - prints all the digits in
 * the hexadecimal using putchar() function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int c = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
