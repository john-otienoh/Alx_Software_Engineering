#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
 * 0 to 14 followed by a new line
 *
 * Return:0
 */
void more_numbers(void)
{
	int i;
	int print_10;

	for (print_10 = 0; print_10 < 10; print_10++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

