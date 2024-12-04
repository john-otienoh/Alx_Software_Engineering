#include <stdio.h>

/**
 * main - program that prints alphabets in lowercase
 * and then in uppercase followed by a newline.
 *
 * lowerCase - stores characters in lowercase
 * upperCase - stores characters in uppercase
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');
	return (0);
}
