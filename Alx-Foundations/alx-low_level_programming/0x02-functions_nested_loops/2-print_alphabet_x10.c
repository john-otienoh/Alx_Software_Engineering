#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * in lowercase, followed by a new line
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	char lower_case;
	int print_10;

	for (print_10 = 1; print_10 <= 10; print_10++)
	{
		for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		{
			_putchar(lower_case);
		}
		_putchar('\n');
	}
}

