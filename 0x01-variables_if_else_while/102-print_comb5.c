#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{

	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
	for (j = i + 1; j <= '9'; j++)
	{
	putchar(i);
        putchar(j);
	for (k = '0' ; k <= '9' ; k++)
	{
	for (l = l + k  ; l <= '9' ; l++)
	{
	putchar(' ');
	putchar(k);
	putchar(l);
	putchar(',');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
