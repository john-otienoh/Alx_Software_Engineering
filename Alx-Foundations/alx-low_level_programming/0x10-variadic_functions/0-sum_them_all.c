#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: number of variables to be passed
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list addition;
	unsigned int i;
	int sum = 0;

	va_start(addition, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(addition, int);
	}
	va_end(addition);
	return (sum);
}
