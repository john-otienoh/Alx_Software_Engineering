#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line in the terminal
 * @n: is the number of times the character _ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n != 0 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
