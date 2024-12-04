#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number.
 * @x: stores the number
 * @last_digit - st0res last digit of x integer
 * Return: Always 0(success)
 */
int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;
	if (last_digit < 0)
		last_digit = last_digit * -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
