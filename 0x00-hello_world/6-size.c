#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
char c;
int n;
long int t;
long long int x;
float q;
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of a int: %lu byte(s)\n", sizeof(n));
printf("Size of a long int: %lu byte(s)\n", sizeof(t));
printf("Size of a long long int: %lu byte(s)\n", sizeof(x));
printf("Size of a float: %lu byte(s)\n", sizeof(q));
}
