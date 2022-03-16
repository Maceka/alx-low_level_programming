#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer, Start from 00:00 to 23:58
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, n, y, u;

	for (i = 48; i <= 50; i++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (i == 50 && n == 52)
			{
				break;
			}
			for (y = 48; y <= 53; y++)
			{
				for (u = 48; u <= 57; u++)
				{
					_putchar(i);
					_putchar(n);
					_putchar(':');
					_putchar(y);
					_putchar(u);
					_putchar('\n');
				}
			}
		}
	}
}
