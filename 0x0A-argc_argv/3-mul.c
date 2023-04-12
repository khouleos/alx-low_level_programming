#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int c = 0, v = 0;

	if (argc == 3)
	{
		c = atoi(argv[1]);
		v = atoi(argv[2]);
		printf("%d\n", c * v);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
