#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * Return: Always 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;
	long int c;

	printf("%lu, %lu, ", a, b);
	for (i = 2; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i < 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
