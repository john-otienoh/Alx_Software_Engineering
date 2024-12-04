#include "main.h"
/**
 * _int - Function used emulate how printf prints
 * decimals
 * @num: number to be printed.
 *
 * Return: Number of characters printed
 */
int _int(int num)
{
	int n, rValue = 0;

	if (num <= 0)
	{
		return (0);
	}
	n = num % 10;
	rValue++;
	_int(num / 10);
	_putchar(n + '0');
	return (rValue);
}
