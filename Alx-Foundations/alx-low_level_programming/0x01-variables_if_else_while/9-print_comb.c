#include <stdio.h>

/**
 * main - program that prints all possible
 * combinations of single-digit numbers.
 *
 * digit - stores value of the number
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		if (digit <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
