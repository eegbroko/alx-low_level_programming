#include <time.h>
#include <stdio.h>

/**
 * main - 3-print_alphabets.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97, m = 65;
for (n = 97; n <= 122; n++)
putchar(n);

for (m = 65; m <= 90; m++)
putchar(m);
putchar('\n');
return (0);
}
