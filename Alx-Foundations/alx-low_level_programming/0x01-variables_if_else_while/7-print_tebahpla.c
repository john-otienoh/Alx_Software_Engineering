#include<stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * rev_alphabet - stores the alphabet in a reverse order
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int rev_alphabet = 'z';

	while (rev_alphabet >= 'a')
	{
		putchar(rev_alphabet);
		rev_alphabet--;
	}
	putchar('\n');
	return (0);
}
