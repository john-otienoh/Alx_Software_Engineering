#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string, in reverse
 * @s: stores the string
 * Return: Always 0(Success)
 */
void print_rev(char *s)
{
	int rev, i;

	rev = strlen(s);
	for (i = rev - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
