#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @n: number of elements
 * @a: the array
 * Return: always 0(success)
 */
void print_array(int *a, int n)
{
	int i;
	int count = 0;

	for (i = 0; i < n; i++)
	{
		count++;
		printf("%d", a[i]);
		if (count < n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
