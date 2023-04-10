#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints its name
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	if (argc > 1)
	{
	for (i = 1; i < argc ; i++)
	{
		res *= atoi(argv[i]);
	}
	printf("%d\n", res);
	}
	return (0);
}
