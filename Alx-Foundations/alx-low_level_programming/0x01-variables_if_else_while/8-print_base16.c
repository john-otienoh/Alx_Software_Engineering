#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * digti - stores values of the number of base 16
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 15)
	{
		if (digit >= 10)
		{
			putchar(digit - 10 + 'a');
		}
		else
		{
			putchar(digit + '0');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
