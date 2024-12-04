#include "main.h"
/**
 *  print_alphabet -  function that prints the alphabet, in lowercase
 *
 *  Return:0
 */

void print_alphabet(void)
{
	char lower_case;

	lower_case = 'a';
	do {
		_putchar(lower_case);
		lower_case++;
	} while (lower_case <= 'z');
	_putchar('\n');
}

