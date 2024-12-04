#include <stdio.h>
/**
 * main - entry point of the program
 * i - usedfor looping
 * sum - stores the sum
 * Return: Always 0(success)
 */

int main(void)
{
	int i;
	int sum = 0;

	i = 0;
	while (i <= 1023)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
		if (i % 5 == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	sum = sum - 35190;
	printf("%d\n", sum);
	return (0);
}
