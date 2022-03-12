#include <stdio.h>

/**
 * main - print out the number 0 - 10
 * using the while loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
