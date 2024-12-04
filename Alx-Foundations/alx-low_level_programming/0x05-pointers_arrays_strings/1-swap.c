#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers.
 * @a: stores first integer
 * @b: stores second integer
 * temp: stores the temporary value
 *
 * Return: Always 0(success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

