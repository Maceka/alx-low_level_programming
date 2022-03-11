#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/*
	 * main function - Entry point
	 * 
	 * Please use it consistently.
	 *
	 * Description:  This function checks the n random number and
	 * outputs if it's negative, positive or zero
	 **/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
