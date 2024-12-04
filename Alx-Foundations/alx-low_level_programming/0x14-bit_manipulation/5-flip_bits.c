#include "main.h"

/**
* flip_bits - change number.
* @n: number
* @m: other number
* Return: number of bits you would need to flip to get from one number
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = 0, changes = 0;

	difference = n ^ m;
	while (difference)
	{
		if (difference & 1)
		{
			changes++;
		}
		difference = difference >> 1;
	}
	return (changes);
}
