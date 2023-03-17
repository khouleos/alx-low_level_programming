#include <stdio.h>
/**
 * main - Entry point of program
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9' ; i++)
	{
		for (j = i + 1; j <= '9' ; j++)
	{
	if (i != j)
	{
		putchar(i);
		putchar(j);
	if (i == '8' && j == '9')
		continue;
		putchar(44);
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
