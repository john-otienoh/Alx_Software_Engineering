#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: the string
 * Return: always 0(success)
 */
void puts_half(char *str)
{
	int i, n;
	int count = 0;

	i = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	n = (count - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
