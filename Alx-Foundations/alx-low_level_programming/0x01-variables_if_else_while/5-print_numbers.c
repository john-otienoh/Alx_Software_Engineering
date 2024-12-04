#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * digit - stores the single digit
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
