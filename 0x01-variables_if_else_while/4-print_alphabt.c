#include <stdio.h>

/**
 * main - assigns function to print letters
 * a - z in lower case with an exception of q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q')
		{
			continue;
		}
		if (a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
