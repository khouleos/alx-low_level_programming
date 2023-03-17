#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry mode for program
 *
 * Return: Always 0 Success
 */
inti main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int res= n % 10;
	if (res > 5)
		printf("Last digit of %d is %d and is greater than 5", n, res);
	else if (res < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, res);
	else
		printf("Last digit of %d is %d and is 0", n, res);
	return (0);
}
