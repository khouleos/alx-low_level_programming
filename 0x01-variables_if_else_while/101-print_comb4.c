#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{

	int i, j, k;

	for (i = '0'; i < '9'; i++)
	{

	for (j = i + 1; j <= '9'; j++)
	{
	for (k = j + 1; k <= '9' ; k++)
	{
	if (j != i)
	{
	putchar(i);
	putchar(j);
	putchar(k);
	if (i == j && j == k && k == i)
	continue;
	if (i == '7' && j == '8' && k == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
