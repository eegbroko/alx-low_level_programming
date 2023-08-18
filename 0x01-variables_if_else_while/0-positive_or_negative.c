#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * if n > 0 print +, if 0 print 0, and if < 0 print -
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if  (n > 0)

		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
