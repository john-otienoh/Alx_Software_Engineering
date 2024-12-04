#include "main.h"
/**
 * main - program that prints _putchar, followed by a new line.
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char  print[] = "_putchar";
	int i = 0;

	while (print[i] != '\0')
	{
		_putchar(print[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
