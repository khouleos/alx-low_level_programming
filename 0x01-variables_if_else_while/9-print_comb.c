#include <stdio.h>
/**
 * main - Entry point of program
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57 ; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
