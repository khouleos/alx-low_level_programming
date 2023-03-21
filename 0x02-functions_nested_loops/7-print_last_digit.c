#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be checked
 * Return: value of last digiti
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (res < 0)
	res = res * -1;
	_putchar(res + '0');
	return (res);
}
