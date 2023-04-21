#include "variadic_functions.h"
/**
 * sum_them_all - sum all the int
 * @n: number of arguments
 * Return: Print results
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n = 0)
		return (0);
	va_list ap;

	va_start(ap, n);
	unsigned int i = 0, sum = 0;

	for(i = 0 ; i < n ; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
