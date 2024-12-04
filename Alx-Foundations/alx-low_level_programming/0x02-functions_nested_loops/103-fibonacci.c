#include <stdio.h>
/**
 * main - program that prints sum of even fibonacci
 * Return: Always 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int i, c;
	int sum = 0;

	for (i = 0; i <= 29; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			sum = sum + c;
		}
	}
	printf("%d", sum + 2);
	putchar('\n');
	return (0);
}
