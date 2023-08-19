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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d and is greater than five\n", n);
	else if (n == 0)
		printf("%d and is zero\n", n);
	else
		printf("%d and is less than six and not 0\n", n);
	return (0);
}
