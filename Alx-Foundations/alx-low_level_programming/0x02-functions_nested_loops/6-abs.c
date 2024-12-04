#include "main.h"

/**
 * _abs -  function that prints an absolute  number.
 * @x: stores the number
 * @absolute - st0res absolute  integer
 * Return: Always 0(success)
 */
int _abs(int x)
{
	int absolute;

	if (x < 0)
	{
		absolute = x * -1;
		return (absolute);
	}
	else
		return (x);
}
