#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Decimal number
 * @index: index of bit we want to get
 * Return: bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin;

	bin = (sizeof(n) * 8);
	if (index < bin)
	{
		return (((1 << index) & n) >> index);
	}
	return (-1);
}
