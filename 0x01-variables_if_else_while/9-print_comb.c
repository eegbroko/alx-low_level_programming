#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print 9-print_comb
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

