#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print 8-print_base16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		printf("%x", i);
	}
	putchar('\n');
	return (0);
}
