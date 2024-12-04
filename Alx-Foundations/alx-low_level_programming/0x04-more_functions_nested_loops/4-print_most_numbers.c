#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * except 2 and 4
 * followed by a new line.
 * i - stores the integer
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
