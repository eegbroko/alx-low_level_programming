#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than five\n", n, ld);
	if (ld == 0)
		printf("Last digit of %d is %d and is zero\n", n, ld);
	if (ld != 0)
		printf("Last digit of %d is %d and is less than six and not 0\n", n, ld);
	return (0);
}
