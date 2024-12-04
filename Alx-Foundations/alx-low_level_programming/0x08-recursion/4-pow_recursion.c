#include "main.h"
/**
 * _pow_recursion - function that returns x raised to power of y.
 * @x: The Base integer.
 * @y: The Exponent integer.
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
	{
		if (y != 1)
			return (x * _pow_recursion(x, (y - 1)));
	}
	return (1);
}
