#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int n, a;

	n = 'a';
	a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
