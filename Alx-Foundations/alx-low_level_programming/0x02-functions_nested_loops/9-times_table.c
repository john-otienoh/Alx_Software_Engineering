#include "main.h"
/**
 * times_table - function that ptints 9 times table
 */
void times_table(void)
{
	int col = 0, row = 0, unit = 0, tens = 0, n = 0;

	while (row < 10)
	{
		while (col < 10)
		{
			n = col * row;
			unit = n % 10;
			tens = (n - unit) / 10;
			if (col > 0)
			{
				_putchar(' ');
				if (tens <= 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(tens + '0');
				}
			}
			_putchar(unit + '0');
			if (col < 9)
			{
				_putchar(',');
			}
			col++;
		}
		col = 0;
		row++;
		_putchar('\n');
	}
}
